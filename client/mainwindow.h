#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket> // !!!
#include <QDataStream> // !!!
#include <QMessageBox> // для окон с ошибками
#include <QCloseEvent> // для отслеживания закрытия окна
#include <QTime> // для отображения времени

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_pushButton_3_clicked();


    void on_listWidget_itemSelectionChanged();


private:
    Ui::MainWindow *ui;
    QTcpSocket *socket; // сокет
    QByteArray Data; // данные между клиентом и сервером

    void SendToServer(QString usr_name, QString str); // метод передачи данных к серверу

    void closeEvent(QCloseEvent* event); // метод отслеживает закрытие окна

    quint16 nextBlockSize; // переменная для хранения размера болка(теперь сообщения будут отправляться блоками по 16 бит(2 байта), так будет правильнее в рамках протокола ТСP)

    QTime time;

    QString user_name; // имя пользователя

public slots:
    void slotReadyRead(); // обработчик ,полученых от сервера, сообщений

    void sendEmoji(); // метод-слот для отправки смайликов
};
#endif // MAINWINDOW_H
