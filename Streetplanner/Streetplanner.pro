QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    abstractmap.cpp \
    city.cpp \
    dialog.cpp \
    dijkstra.cpp \
    externalmap.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    mapio.cpp \
    mapiofileinput.cpp \
    mapionrw.cpp \
    street.cpp \
    streetdialog.cpp

HEADERS += \
    abstractmap.h \
    city.h \
    dialog.h \
    dijkstra.h \
    externalmap.h \
    mainwindow.h \
    map.h \
    mapio.h \
    mapiofileinput.h \
    mapionrw.h \
    street.h \
    streetdialog.h

FORMS += \
    dialog.ui \
    externalmap.ui \
    mainwindow.ui \
    streetdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
