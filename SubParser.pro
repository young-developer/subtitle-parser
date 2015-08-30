#-------------------------------------------------
#
# Project created by QtCreator 2015-08-30T15:03:00
#
#-------------------------------------------------

QT       -= gui

TARGET = SubParser
TEMPLATE = lib

DEFINES += SUBPARSER_LIBRARY

SOURCES += subparser.cpp \
        SubtitleWord.cpp \
        SubtitleItem.cpp \
        SubtitleParser.cpp \
        SubRipParser.cpp \
        SubtitleParserFactory.cpp

HEADERS += subparser.h \
        subparser_global.h \
        SubtitleWord.h \
        SubtitleItem.h \
        SubtitleParser.h \
        SubRipParser.h \
        SubtitleParserFactory.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
