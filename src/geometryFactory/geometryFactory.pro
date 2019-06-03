QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = geometryFactory
TEMPLATE = app

HEADER_PATH = ../headers/geometryFactory/

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        EllipseFigure.cpp \
        GeomFigFactory.cpp \
        MainForm.cpp \
        ParrallelogramFigure.cpp \
        RectangleFigure.cpp \
        RegularPolygonFigure.cpp \
        TrapezeFigure.cpp \
        TriangleFigure.cpp \
        main.cpp \
        BaseFigure.cpp

HEADERS += \
        $${HEADER_PATH}/BaseFigure.h \
        $${HEADER_PATH}/EllipseFigure.h \
        $${HEADER_PATH}/GeomFigCreator.h \
        $${HEADER_PATH}/GeomFigFactory.h \
        $${HEADER_PATH}/ParallelogramFigure.h \
        $${HEADER_PATH}/RectangleFigure.h \
        $${HEADER_PATH}/RegularPolygonFigure.h \
        $${HEADER_PATH}/TrapezeFigure.h \
        $${HEADER_PATH}/TriangleFigure.h \
        ../../headers/other/constans.h \
        $${HEADER_PATH}/structGeomFactory.h

FORMS += \
        MainForm.ui \
        mainwindow1.ui

include( ../../common.pri )
include( ../../app.pri )

LIBS += -lMyLib$${LIB_SUFFIX}
