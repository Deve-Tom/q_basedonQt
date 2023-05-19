//
// Created by 23148 on 2023/5/19.
//

#ifndef Q_BASEDONQT_NETSERVICE_H
#define Q_BASEDONQT_NETSERVICE_H
#include <utility>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QEventLoop>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QByteArray>
#include <QObject>

class netService:public QObject {
    Q_OBJECT


public:
    enum{
        LoginServer,
        RegisterServer,
        GetUserInfoServer,
        GetFriendListServer,
        AddUserServer,
        DeleteUserServer,
        GetFriendInfoServer,
        SendMessageServer,
        ReceiveMessageServer
    };
public:
    explicit netService(QString url,QObject *parent = nullptr);
    ~netService() override;
    QJsonObject sendRequest(QJsonObject &data,QString router);
private:
    QString url;
    QNetworkAccessManager *manager;
};


#endif//Q_BASEDONQT_NETSERVICE_H
