
#include "messageaction.h"

MessageAction::MessageAction(QObject *parent)
    : QObject{parent}{

}

// 设置ws并建立连接
void MessageAction::setUrl(QString IP,QString router,QString user_id, QString send_id){
    this->webSocketUrl= IP+router+"?user_id="+user_id+"&send_id="+send_id;

    this->socket = new QWebSocket();

    connect(this->socket,&QWebSocket::connected,this,&MessageAction::connectSuccess);
    connect(this->socket,&QWebSocket::textMessageReceived,this,&MessageAction::recieveMessage);

    // 建立连接
    this->socket->close();
    this->socket->open(this->webSocketUrl);
}

// 发送文字消息
void MessageAction::sendStringMessage(const QString &message){
    this->socket->sendTextMessage(message);
}

// 发送比特流
void MessageAction::sendBinaryMessage(const QByteArray &message){
    this->socket->sendBinaryMessage(message);
}

// 关闭webSocket连接
void MessageAction::closeConnect(){
    this->socket->close();
}

