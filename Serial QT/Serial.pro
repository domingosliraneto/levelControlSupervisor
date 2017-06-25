#-------------------------------------------------
#
# Project created by QtCreator 2017-05-19T19:20:53
#
#-------------------------------------------------

QT       += core gui
QT       += serialport
QT       += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets\
                                        printsupport

TARGET = Serial
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    SistemasdeControle/headers/graphicLibs/QCustomPlot/qcustomplot.cpp \
    SistemasdeControle/src/communicationLibs/serial/comunicacao.cpp \
    SistemasdeControle/src/graphicLibs/plot/callout.cpp \
    SistemasdeControle/src/graphicLibs/plot/plot.cpp \
    setpwmvalues.cpp

HEADERS  += mainwindow.h \
    SistemasdeControle/headers/communicationLibs/serial/comunicacao.h \
    SistemasdeControle/headers/graphicLibs/QCustomPlot/qcustomplot.h \
    SistemasdeControle/headers/primitiveLibs/polynom.h \
    SistemasdeControle/src/primitiveLibs/polynom.hpp \
    SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h \
    SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h \
    SistemasdeControle/src/primitiveLibs/LinAlg/linalg.hpp \
    SistemasdeControle/src/primitiveLibs/LinAlg/matrix.hpp \
    SistemasdeControle/headers/modelLibs/transferfunction.h \
    SistemasdeControle/src/modelLibs/transferfunction.hpp \
    SistemasdeControle/headers/graphicLibs/plot/callout.h \
    SistemasdeControle/headers/graphicLibs/plot.h \
    SistemasdeControle/src/graphicLibs/plot.hpp \
    SistemasdeControle/headers/graphicLibs/plot/plot.h \
    setpwmvalues.h

FORMS    += mainwindow.ui \
    setpwmvalues.ui

DISTFILES += \
    rad.ico \
    myapp.rc

RC_FILE = myapp.rc
