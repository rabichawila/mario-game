TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    game.cpp

# Command
# -L[Directory path of "lib" folder] -lSDL2
LIBS +=  -lSDL2

# [Directory of "include"]
INCLUDEPATH += SDL2

HEADERS += \
    game.h \
    framework.h
