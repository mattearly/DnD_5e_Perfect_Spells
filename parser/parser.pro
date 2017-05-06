#-------------------------------------------------
#
# Project created by QtCreator 2017-05-04T14:59:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = parser
TEMPLATE = app


SOURCES += main.cpp\
        jsonspellparser.cpp

HEADERS  += jsonspellparser.h spellstruct.h

FORMS    += jsonspellparser.ui
