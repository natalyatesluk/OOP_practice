QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbook.cpp \
    addsong.cpp \
    audiobook.cpp \
    basesound.cpp \
    bookshow.cpp \
    main.cpp \
    mainwindow.cpp \
    song.cpp \
    songshow.cpp \
    sqlitedbmanager.cpp

HEADERS += \
    DBManage.h \
    addbook.h \
    addsong.h \
    audiobook.h \
    basesound.h \
    bookshow.h \
    mainwindow.h \
    song.h \
    songshow.h \
    sqlitedbmanager.h

FORMS += \
    addbook.ui \
    addsong.ui \
    bookshow.ui \
    mainwindow.ui \
    songshow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ICONS.qrc
