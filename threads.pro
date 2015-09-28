#-------------------------------------------------
#
# Project created by QtCreator 2015-09-13T16:02:55
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = threads
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    worker.cpp \
    master.cpp

HEADERS += \
    worker.h \
    master.h
