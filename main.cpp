#include <QCoreApplication>
#include <QThread>
#include <worker.h>
#include <QObject>

#include <master.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Master master;
    master.start();
    return a.exec();
}
