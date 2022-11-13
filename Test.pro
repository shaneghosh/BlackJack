TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    card.cpp \
    deck.cpp \
    hand.cpp \
    house.cpp \
    player.cpp \
    game.cpp \
    genericplayer.cpp

HEADERS += \
    card.h \
    deck.h \
    hand.h \
    house.h \
    player.h \
    game.h \
    genericplayer.h
