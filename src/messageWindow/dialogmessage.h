#ifndef DIALOGMESSAGE_H
#define DIALOGMESSAGE_H

#include <QWidget>
#include <QListWidget>
#include <QJsonObject>
#include <QBuffer>
#include <QImageReader>
#include "../utils/chatmessage/qnchatmessage.h"
#include "../mainWindow/messageaction.h"
#include "../webService/netService.h"

namespace Ui {
class DialogMessage;
}

class DialogMessage : public QWidget
{
    Q_OBJECT

public:
    explicit DialogMessage(QWidget *parent = nullptr);
    ~DialogMessage();

private slots:
    void on_senMessage_clicked();
    void on_iniInfor(int friend_id,int user_id,QString token);
    void recieveInfor(const QString&message);

public slots:
    void reset(int current_id,int user_id,QString token);
    void setNet(netService* _net);

signals:
    void thisSendMessage(const QString&data);


private:
    Ui::DialogMessage *ui;
    QPixmap currentFrined;
    QPixmap user;
    int friend_id;
    int user_id;
    netService *net;
    MessageAction *websct;

    void dealMessageTime(QString curMsgTime);
    void dealMessage(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time,  QNChatMessage::User_Type type);
};

#endif // DIALOGMESSAGE_H
