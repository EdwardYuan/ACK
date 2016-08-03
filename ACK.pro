TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ACKBase.cpp \
    gom.cpp \
    test/test.cpp

HEADERS += \
    ACKBase.h \
    gom.h \
    test/test.h \
    global.h
