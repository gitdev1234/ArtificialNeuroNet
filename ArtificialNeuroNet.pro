#-------------------------------------------------
#
# Project created by QtCreator 2016-05-12T21:06:58
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = ArtificialNeuroNet
CONFIG   += console
CONFIG   -= app_bundle
CONFIG   += c++11

TEMPLATE = app


SOURCES += main.cpp \
    artificialneuronet.cpp \
    layer.cpp

HEADERS += \
    artificialneuronet.h \
    Types.h \
    layer.h
