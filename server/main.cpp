#include <QCoreApplication>
#include "server.h" // header

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Server s; // объект класса сервер
    return a.exec();
}
