QT       += core gui network websockets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    src/loginWindow/loginwidget.cpp \
    src/mainWindow/mainwindow.cpp \
    src/messageWindow/dialogmessage.cpp \
    src/utils/QJsonWebSocket/qjsonwebtoken.cpp \
    src/utils/jsonfilecoinfig.cpp \
    src/utils/jsontools.cpp \
    src/utils/userfile.cpp \
    src/webService/netService.cpp \
    src/webService/websocketclient.cpp

HEADERS += \
    src/loginWindow/loginwidget.h \
    src/mainWindow/mainwindow.h \
    src/messageWindow/dialogmessage.h \
    src/utils/QJsonWebSocket/qjsonwebtoken.h \
    src/utils/jsonfilecoinfig.h \
    src/utils/jsontools.h \
    src/utils/userfile.h \
    src/webService/netService.h \
    src/webService/websocketclient.h

FORMS += \
    src/loginWindow/loginwidget.ui \
    src/mainWindow/mainwindow.ui \
    src/messageWindow/dialogmessage.ui

UI_DIR = .

TRANSLATIONS += \
    q_basedonQt_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
