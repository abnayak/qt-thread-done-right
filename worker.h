#ifndef WORKER_H
#define WORKER_H
#include <QObject>
#include <QDebug>
#include <QThread>

class Worker : public QObject
{
    Q_OBJECT

public:
    Worker();

public slots:
    void start();

signals:
    void WorkerFinished();
};

#endif // WORKER_H
