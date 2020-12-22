QT       += core gui
CONFIG += rtti

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    authorization.cpp \
    game_capital.cpp \
    information.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    menu.cpp \
    registration.cpp \
    text_file.cpp

HEADERS += \
    Country.h \
    User.h \
    authorization.h \
    game_capital.h \
    information.h \
    mainwindow.h \
    map.h \
    menu.h \
    registration.h \
    text_file.h

FORMS += \
    authorization.ui \
    game_capital.ui \
    information.ui \
    mainwindow.ui \
    map.ui \
    menu.ui \
    registration.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
