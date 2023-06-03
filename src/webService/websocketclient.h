
#ifndef WEBSOCKETCLIENT_H
#define WEBSOCKETCLIENT_H


#include <QObject>
#include <QWebSocket>
#include <QUrl>

class webSocketClient : public QObject
{
    Q_OBJECT
public:
    explicit webSocketClient(QObject *parent = nullptr);
    ~webSocketClient();

public:
    void connectUrl(QString url);
    void close();
    void sendTextMsg(const QString &message);
    void sendBinaryMsg(const QByteArray &data);
    bool getConStatus();

signals:
    void sigRecvTextMsg(QString message);

private slots:
    void slotConnected();
    void slotDisconnected();
    void slotRecvTextMsg(QString message);
    void slotRecvBinaryMsg(QByteArray message);
    void slotError(QAbstractSocket::SocketError error);

private:
    void reconnect();
    QWebSocket *pWebSocket;
    QUrl url;
    bool bConnected = false; // true表示成功链接

};

#endif // WEBSOCKETCLIENT_H
