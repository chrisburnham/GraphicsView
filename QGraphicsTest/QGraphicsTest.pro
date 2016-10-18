#-------------------------------------------------
#
# Project created by QtCreator 2016-10-18T10:11:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QGraphicsTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    view.cpp \
    my_pixmap.cpp

HEADERS  += mainwindow.h \
    view.h \
    scene.h \
    my_pixmap.h

FORMS    += mainwindow.ui

RESOURCES += \
    images.qrc
