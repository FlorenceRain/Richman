QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bank.cpp \
    card.cpp \
    chancetile.cpp \
    characterselectionwidget.cpp \
    communitychesttile.cpp \
    companytile.cpp \
    countrytile.cpp \
    dice.cpp \
    gameboardwidget.cpp \
    gamemanager.cpp \
    gameview.cpp \
    jailtile.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    player.cpp \
    playeravatarselectiondialog.cpp \
    startmenuwidget.cpp \
    starttile.cpp \
    tile.cpp \
    transportstationtile.cpp

HEADERS += \
    bank.h \
    card.h \
    chancetile.h \
    characterselectionwidget.h \
    communitychesttile.h \
    companytile.h \
    countrytile.h \
    dice.h \
    gameboardwidget.h \
    gamemanager.h \
    gameview.h \
    jailtile.h \
    mainwindow.h \
    map.h \
    player.h \
    playeravatarselectiondialog.h \
    startmenuwidget.h \
    starttile.h \
    tile.h \
    transportstationtile.h

FORMS += \
    characterselectionwidget.ui \
    gameboardwidget.ui \
    mainwindow.ui \
    playeravatarselectiondialog.ui \
    startmenuwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    resource.qrc
