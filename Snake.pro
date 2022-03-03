QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++14

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    base.cpp \
    classcal_game.cpp \
    classcal_game_setting.cpp \
    game_list.cpp \
    help.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    map_design.cpp \
    map_list.cpp \
    pass_game.cpp \
    pass_game_setting.cpp \
    player_rank.cpp

HEADERS += \
    base.h \
    classcal_game.h \
    classcal_game_setting.h \
    game_list.h \
    help.h \
    mainwindow.h \
    map.h \
    map_design.h \
    map_list.h \
    pass_game.h \
    pass_game_setting.h \
    player_rank.h

FORMS += \
    classcal_game.ui \
    classcal_game_setting.ui \
    game_list.ui \
    help.ui \
    mainwindow.ui \
    map_design.ui \
    map_list.ui \
    pass_game.ui \
    pass_game_setting.ui \
    player_rank.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Image.qrc

DISTFILES +=
