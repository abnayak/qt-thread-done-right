#include "worker.h"

Worker::Worker(){

}

void Worker::start() {
    // Print from 1 to 10 with thread id

   for(int i = 1; i<=50; i++) {
       qDebug() << "Worker thread ID: " << QThread::currentThreadId() << " # " << i;
       // Sleep for 500 miliseconds
       QThread::msleep(500);
   }
}
