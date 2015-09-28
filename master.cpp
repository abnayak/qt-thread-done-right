#include "master.h"

Master::Master()
{
    thread = new QThread();
    worker = new Worker();
    worker->moveToThread(thread);

    // connect the signal and slots
    connect(this,SIGNAL(startWorker()),worker,SLOT(start()));
    connect(worker,SIGNAL(WorkerFinished()),this,SLOT(onWorkerFinished()));

    // Start the thread
    thread->start();
}

void Master::start() {
    //emit startWorker();
}

void Master::onWorkerFinished() {
    qDebug() << "Master threadId: " << QThread::currentThreadId() <<  "Worker Finished";
}
