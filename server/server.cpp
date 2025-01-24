#include "server.h"

Server::Server() { // определение конструктора
    if(this->listen(QHostAddress::Any, 2323)){ // если сервер запустился
        qDebug() << "start"; // вывод в консоль
    }else{
        qDebug() << "error";
    }
    nextBlockSize = 0;
}

void Server::incomingConnection(qintptr socketDescriptor){  // определение метода (слота)
    socket = new QTcpSocket; // создание нового сокета
    socket->setSocketDescriptor(socketDescriptor); // установка дескриптора(отвечает за ввод/вывод)
    connect(socket, &QTcpSocket::readyRead, this, &Server::slotReadyRead); // объединение сигнала readyRead с нужным слотом
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater); // удаление сокета?

    Sockets.push_back(socket); // помещение новых сокетов в вектор
    qDebug() << "client connected" << socketDescriptor; // вывод клиента и его дескриптора
}

void Server::slotReadyRead(){ // определение метода (слота)
    socket = (QTcpSocket*)sender(); // сокет, с которого пришел запрос
    QDataStream in(socket); // для приема передачи данных
    in.setVersion(QDataStream::Qt_5_15); // версия QDataStream

    if (in.status() == QDataStream::Ok){
        qDebug() << "read";
        /*QString str;
        in >> str;
        qDebug() << str;

        SendToClient(str); // отправка строки клиенту*/

        for(;;){ // бесконечный цикл
            if(nextBlockSize == 0){ // если размер бока неизвестен
                if(socket->bytesAvailable() < 2){ // если для чтения доступно не меньше 2 байт
                    qDebug() << "Data < 2, break";
                    break; // выход из цикла
                }
                in >> nextBlockSize;
                qDebug() << "nextblocksize = " << nextBlockSize;
            }
            if(socket->bytesAvailable() < nextBlockSize){ // данные пришли не полностью
                qDebug() << "Data not full";
                break;
            }
            QString str;
            QTime time;
            QString usr_name;
            in >> time >> usr_name >> str; // Чтение данных из потока in
            nextBlockSize = 0; // чтобы можно было дальше принимать новые сообщения
            //qDebug() << str; // сообщение в консоль
            SendToClient(usr_name, str); // отправка имени отправителя и строки клиенту
            break;
        }
    }else{
        qDebug() << "DataStream error";
    }
}

void Server::SendToClient(QString usr_name, QString str){ // // определение метода
    Data.clear();  // очистка?
    QDataStream out(&Data, QIODevice::WriteOnly); // данные на вывод(в конструкторе: массив байтов и режим работы)
    out.setVersion(QDataStream::Qt_5_15);
    out << quint16(0) << QTime::currentTime() << usr_name << str; // записать через поток out строку, выделеные байты для блока(2 байта)?, имя пользователя и текущее время в массив Data
    out.device()->seek(0); // подсчет разиера блока?
    out << quint16(Data.size() - sizeof(quint16)); // размер сообщения, как разность между длинной всего блока и выделеными 2 байтами?

    for(int i = 0; i < Sockets.size(); i++){ // запись Data во все подключенные сокеты
        Sockets[i]->write(Data);
    }
}

