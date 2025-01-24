#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) // конструктор
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this); // создание сокета


    connect(socket, &QTcpSocket::readyRead, this, &MainWindow::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);

    ui->pushButton_2->setEnabled(false); // заблокировать кнопку отпраки
    ui->pushButton_3->setEnabled(false); // заблокировать кнопку ответа

    ui->statusbar->showMessage("Offline"); // при запуске вывод в статус бар текст оффлайн

    nextBlockSize = 0;
    QPushButton* smileButtons[] = { // массив указателей кнопок всех смайликов
        ui->smileButton_0, ui->smileButton_1, ui->smileButton_2,
        ui->smileButton_3, ui->smileButton_4, ui->smileButton_6,
        ui->smileButton_7, ui->smileButton_8, ui->smileButton_9,
        ui->smileButton_10, ui->smileButton_11, ui->smileButton_12,
        ui->smileButton_13, ui->smileButton_14, ui->smileButton_15
    };

    for (auto sml_btns : smileButtons) { // range-based цикл, который проходиться по массиву смайликов и присойденяет каждый к слоту sendEmoji()
        connect(sml_btns, SIGNAL(clicked()), this, SLOT(sendEmoji()));
    }
    connect(ui->smileButton_15, SIGNAL(clicked()), this, SLOT(sendEmoji()));

    QPixmap pix(":/img/img/hovrah_chat_logo.png"); // это для иконки
    int w = 150;
    int h = 150;

    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked() // кнопка connect
{
    if (!ui->name_line->text().isEmpty() && !ui->ip_line->text().isEmpty()){ // если имя пользователя и ip не пустое

        //socket->connectToHost("127.0.0.1", 2323); // подключение к сереверу через локальный IP адресс и хост

        socket->connectToHost(ui->ip_line->text(), 2323); //  подключение к сереверу через СОБСТВЕННЫЙ IP адресс и хост

        qDebug() << "connect_button_pressed";
        SendToServer(ui->name_line->text(), "<span style='color:green;'> Joined the chat   👋</span> ");
        ui->pushButton->setEnabled(false); // заблокировать повторное подключение
        ui->name_line->setEnabled(false); // заблокировать поле имени
        ui->ip_line->setEnabled(false); // заблокировать поле ip
        ui->pushButton_2->setEnabled(true); // разблокировать кнопку отпраки
        ui->statusbar->showMessage("Online " + ui->ip_line->text()); // онлайн

    }else{
        QMessageBox::warning(this, "Error", "Enter your name and server IP!"); // окно с ошибкой
    }
}

void MainWindow::closeEvent(QCloseEvent *event){ // если окно закрылось
    SendToServer(ui->name_line->text() , "<span style='color:green;'> Left the chat   ↪️🚪</span> " );
}

void MainWindow::SendToServer(QString usr_name, QString str){ //определение метода
    Data.clear();  // очистка?
    QDataStream out(&Data, QIODevice::WriteOnly); // данные на вывод(в конструкторе: массив байтов и режим работы)
    out.setVersion(QDataStream::Qt_5_15);
    out << quint16(0) << QTime::currentTime() << usr_name << str; // запись через out строку, выделеные байты для блока(2 байта)?, имя пользователя и текущее время в массив Data
    out.device()->seek(0); // подсчет разиера блока?
    out << quint16(Data.size() - sizeof(quint16)); // размер сообщения, как разность между длинной всего блока и выделеными 2 байтами?
    socket->write(Data); // запись Data в сокет
    ui->lineEdit->clear(); // очистка поля для ввода сообщения
}


void MainWindow::slotReadyRead(){ // определение слота
    QDataStream in(socket); // для приема передачи данных
    in.setVersion(QDataStream::Qt_5_15); // версия QDataStream

    if (in.status() == QDataStream::Ok){
        /*QString str;
        in >> str;
        ui->textBrowser->append(str); // добавление строки в textBrowser*/

        for(;;){ // бесконечный цикл
            if(nextBlockSize == 0){ // если размер бока неизвестен
                if(socket->bytesAvailable() < 2){ // если для чтения доступно не меньше 2 байт
                    break; // выход из цикла
                }
                in >> nextBlockSize;
            }
            if(socket->bytesAvailable() < nextBlockSize){ // данные пришли не полностью
                break;
            }
            QString str;
            QTime time;
            QString usr_name;
            QString msg;
            in >> time >> usr_name >> str;
            nextBlockSize = 0; // чтобы можно было дальше принимать новые сообщения
            ui->textBrowser->append("[" + time.toString() + "] "+ "<b>" + usr_name + "</b>" + str); // добавление строки и времени в textBrowser
            ui->msg_list->addItem("[" + time.toString() + "] "+ "<b>" + usr_name + "</b>" + str);
            QList<QListWidgetItem *> items = ui->listWidget->findItems(usr_name, Qt::MatchExactly); //  списком указателей на найденные usr_namе`ы в listWidget
            if (items.isEmpty()) { // если список для поиска имеет повтор. имя и параметр usr_name отличаеться от имени текущего пользователя

                ui->listWidget->addItem(new QListWidgetItem(QIcon(":/img/img/user.png"), usr_name)); // добавить его в listWidget
            }
        }
    }else{
        ui->textBrowser->append("read error");
    }
}


void MainWindow::on_pushButton_2_clicked(){ // кнопка send
    if (!ui->lineEdit->text().isEmpty()){ // если поле ввода не пустое
        SendToServer(ui->name_line->text() ,  " " + ui->lasname_line->text() + "<span style='color:gray;'> >> </span> " + ui->lineEdit->text()); // отправка имени и текста из line edit
    }
}

void MainWindow::sendEmoji(){
    QPushButton *button = (QPushButton * )sender(); //указатель на все кнопки смайликов (sender для кнопок смайликов)
    //SendToServer(ui->name_line->text() ,  " " + ui->lasname_line->text() + "<span style='color:gray;'> >> </span> " + button->text()); // отправка имени и смайликов
    ui->lineEdit->insert(button->text());
}



void MainWindow::on_pushButton_3_clicked() // кнопка ответ пользователю
{
    ui->lineEdit->setText("<span style='color:blue;'>" + ui->listWidget->currentItem()->text() + "</span>"); // добавить к строке сообщения имя выбраного пользователя
}




void MainWindow::on_listWidget_itemSelectionChanged()
{
     ui->pushButton_3->setEnabled(true);
}


