
#include "websocketclient.h"

webSocketClient::webSocketClient(QObject *parent)
    : QObject{parent}
{
    this->pWebSocket = new QWebSocket();
}

webSocketClient::~webSocketClient()
{
    if(this->pWebSocket!=nullptr){
        this->pWebSocket->deleteLater();
        this->pWebSocket = nullptr;
    }
}

void webSocketClient::connectUrl(QString _url)
{
    this->url = QUrl(_url);
    this->pWebSocket->open(this->url);
}

void webSocketClient::close()
{
    pWebSocket->close();
}

void webSocketClient::sendTextMsg(const QString &message)
{
    if(!this->bConnected){
        qDebug()<< __FILE__ << __LINE__ <<"Failed to "<< __FUNCTION__<<",it's not running...";
        return;
    }
    this->pWebSocket->sendTextMessage(message);
}

void webSocketClient::sendBinaryMsg(const QByteArray &data)
{
    if(!this->bConnected){
        qDebug()<< __FILE__ << __LINE__ <<"Failed to "<< __FUNCTION__<<",it's not running...";
        return;
    }
    this->pWebSocket->sendBinaryMessage(data);
}

bool webSocketClient::getConStatus()
{
    return this->bConnected;
}

void webSocketClient::slotConnected()
{
    qDebug()<<this->url<<" connect sucessful";
    this->bConnected=true;

    connect(pWebSocket,&QWebSocket::textMessageReceived,this,&webSocketClient::slotRecvTextMsg);
    connect(pWebSocket,&QWebSocket::binaryMessageReceived,this,&webSocketClient::slotRecvBinaryMsg);
}

void webSocketClient::slotDisconnected()
{
    qDebug()<<__FILE__<<__LINE__<<"disconnected";
    reconnect();
}

void webSocketClient::slotRecvTextMsg(QString message)
{
    emit sigRecvTextMsg(message);
}

// 接收二进制数据
void webSocketClient::slotRecvBinaryMsg(QByteArray message)
{
    qDebug()<<"slotRecvBinaryMsg: "<<message;
}

void webSocketClient::slotError(QAbstractSocket::SocketError error)
{
    qDebug() << __FILE__ << __LINE__ << (int)error << this->pWebSocket->errorString();
}

void webSocketClient::reconnect()
{
    qDebug()<<"websocket reconnected";
    pWebSocket->abort();
    pWebSocket->open(this->url);
}


