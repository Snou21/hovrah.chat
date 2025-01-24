#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer> // !!!
#include <QTcpSocket> // !!! сокеты нужны для отправки и получения данных(ip и порт(в TCP порт 16 бит))
#include <QDataStream> // !!!
#include <QVector> //
#include <QTime> // для отображения времени(незнаю, зачем добавлять обработку время к серверу, возможно, чтобы у всех клиентов время было одно и тоже(время на компьютере на котором работает сервер) или просто для примера с работой QDataStream)


// все будет посстроено на протоколе TCP
class Server : public QTcpServer // класс наследник Сревер, который наследуется от QTcpServer
{
    Q_OBJECT
public:
    Server(); // конструктор
    QTcpSocket *socket;
private:
    QVector <QTcpSocket*> Sockets; // вектор для сокетов
    QByteArray Data; // данные между клиентом и сервером

    void SendToClient(QString usr_name, QString str); //метод передачи данных к клиенту

    quint16 nextBlockSize; // размер блока

    QString user_name; // имя пользователя

public slots:
    void incomingConnection(qintptr socketDescriptor); // обработчик новых подключений
    void slotReadyRead(); // обработчик ,полученых от клиента, сообщений

};

#endif // SERVER_H
