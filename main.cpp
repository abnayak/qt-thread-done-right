#include <QCoreApplication>
#include <QThread>
#include <worker.h>
#include <QObject>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Thread to execute the Worker object
    QThread *thread = new QThread();

    // Create the worker object
    Worker *worker = new Worker();
    worker->moveToThread(thread);

    // Connect the thread start signal to worker start slot
    QObject::connect(thread, SIGNAL(started()), worker, SLOT(start()));

    // start the worker
    thread->start();

    // start the main thread
    for(int i = 1; i<=50; i++) {
        qDebug() << "Main thread ID: " << QThread::currentThreadId() << " # " << i;
        // Sleep for 500 miliseconds
        QThread::msleep(500);
    }


    return a.exec();
}
