QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SP_PIC_App
TEMPLATE = app

SOURCES += main.cpp\
           maintoolbar.cpp \
           mainwindow.cpp

HEADERS += mainwindow.h \
    maintoolbar.h

FORMS   += mainwindow.ui

RESOURCES += \
    images.qrc \
    images.qrc
