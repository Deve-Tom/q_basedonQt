
#ifndef MESSAGEACTION_H
#define MESSAGEACTION_H


#include <QObject>
#include <QWebSocket>


class MessageAction : public QObject
{
    Q_OBJECT
public:
    explicit MessageAction(QObject *parent = nullptr);
    void setUrl(QString IP,QString router,QString user_id, QString send_id);

private:
    QString webSocketUrl;
    QWebSocket* socket;

signals:
    void connectSuccess();
    void recieveMessage(const QString &message);

public slots:
    void sendStringMessage(const QString &message);
    void sendBinaryMessage(const QByteArray &message);
    void closeConnect();
};

#endif // MESSAGEACTION_H
