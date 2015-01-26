#-------------------------------------------------
#
# Project created by QtCreator 2015-01-22T22:07:25
#
#-------------------------------------------------

QT       += core gui

QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TemperatureCollection
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tccustomedqwtplot.cpp \
    tccustomedcurveplot.cpp

HEADERS  += mainwindow.h \
    tccustomedqwtplot.h \
    systemconfig.h \
    tccustomedcurveplot.h

FORMS    += mainwindow.ui

INCLUDEPATH += D:\jianglong\Qt\Qt5.4.0\5.4\msvc2010_opengl\include\Qwt

LIBS += -L"D:\jianglong\Qt\Qt5.4.0\5.4\msvc2010_opengl\lib" -lqwtd

CONFIG += qwt
