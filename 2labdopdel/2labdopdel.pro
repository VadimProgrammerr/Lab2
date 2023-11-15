TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    globals.cpp \
    funcs.cpp \
    cclass.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    globals.h \
    funcs.h \
    cclass.h

