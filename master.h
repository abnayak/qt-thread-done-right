#ifndef MASTER_H
#define MASTER_H

#include <QObject>
#include <QThread>
#include <worker.h>
#include <QDebug>

class Master : public QObject
{
    Q_OBJECT

public:
    Master();
    void start();
    QThread *thread;
    Worker *worker;
signals:
    void startWorker();
public slots:
    void onWorkerFinished();
};

#endif // MASTER_H
