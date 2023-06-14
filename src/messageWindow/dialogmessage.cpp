#include "dialogmessage.h"
#include "qimagereader.h"
#include "ui_dialogmessage.h"

DialogMessage::DialogMessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogMessage)
{
    ui->setupUi(this);
}

DialogMessage::~DialogMessage()
{
    delete ui;
}

// 消息发送
void DialogMessage::on_senMessage_clicked(){
    QString msg = ui->messageEditt->toPlainText();
    ui->messageEditt->setText("");
    QString time = QString::number(QDateTime::currentDateTime().toSecsSinceEpoch()); //时间戳

    // bool isSending = true; // 发送中

    if(msg != "") {
        dealMessageTime(time);

        QNChatMessage* messageW = new QNChatMessage(this->user,this->currentFrined,ui->messageListDialog->parentWidget());
        QListWidgetItem* item = new QListWidgetItem(ui->messageListDialog);
        dealMessage(messageW, item, msg, time, QNChatMessage::User_Me);
    }

    ui->messageListDialog->setCurrentRow(ui->messageListDialog->count()-1);

    emit thisSendMessage(msg);
}

// 初始化对话框信息
void DialogMessage::on_iniInfor(int friend_id,int user_id, QString token){
    this->friend_id=friend_id;
    this->user_id=user_id;

    // 好友头像获取
    QJsonObject friendTemp;
    friendTemp.insert("user_id",QString::number(friend_id));
    friendTemp.insert("token",token);

    QJsonObject friendInfo = this->net->sendRequestGetInfo(friendTemp,"/user/");
    if(friendInfo.value("status_msg").toString()=="get successfully"){
        QJsonObject friendInfoDetail = friendInfo.value("user").toObject();
        QJsonObject temp;
        temp.insert("test",true);
        temp.insert("download","");
        temp.insert("content",friendInfoDetail.value("avatar").toString());

        QByteArray friendAvatar = this->net->sendRequestGetFile(temp,"/file/");
        QBuffer buffer(&friendAvatar);
        buffer.open(QIODevice::ReadOnly);
        QImageReader reader(&buffer,"png");
        this->currentFrined = QPixmap::fromImage(reader.read());
    }

    // 用户自身头像获取
    QJsonObject userTemp;
    userTemp.insert("user_id",QString::number(user_id));
    userTemp.insert("token",token);

    QJsonObject userInfo = this->net->sendRequestGetInfo(userTemp,"/user/");
    if(friendInfo.value("status_msg").toString()=="get successfully"){
        QJsonObject userInfoDetail = userInfo.value("user").toObject();
        QJsonObject temp;
        temp.insert("test",false);
        temp.insert("download","");
        temp.insert("content",userInfoDetail.value("avatar").toString());

        QByteArray friendAvatar = this->net->sendRequestGetFile(temp,"/file/");
        QBuffer buffer(&friendAvatar);
        buffer.open(QIODevice::ReadOnly);
        QImageReader reader(&buffer,"png");
        this->user = QPixmap::fromImage(reader.read());
    }
}

// 重设_2
void DialogMessage::reset(int current_id,int user_id, QString token){
    if(ui->messageListDialog->count()>0) ui->messageListDialog->clear();

    on_iniInfor(current_id,user_id,token);

    // 建立webSocket连接
    this->websct->setUrl("ws://100.70.78.20:4523","/holaa/user/send_message/",QString::number(this->user_id),QString::number(this->friend_id));
    connect(this,&DialogMessage::thisSendMessage,this->websct,&MessageAction::sendStringMessage);
    connect(this->websct,&MessageAction::recieveMessage,this,&DialogMessage::recieveInfor);
}

//设置网络_1
void DialogMessage::setNet(netService *_net){
    this->net=_net;

    this->websct = new MessageAction(this);

}

// 处理接收的消息
void DialogMessage::recieveInfor(const QString &message){
    QString time = QString::number(QDateTime::currentDateTime().toSecsSinceEpoch()); //时间戳

    QString data = message;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(message.toUtf8());
    if(!jsonDoc.isNull()){
        QJsonObject jsonOb = jsonDoc.object();
        QJsonValue jv = jsonOb.value("content");
        if(!jv.isNull())
            data = jv.toString();
    }
    // bool isSending = true; // 发送中

    if(data != "") {
        dealMessageTime(time);

        QNChatMessage* messageW = new QNChatMessage(this->user,this->currentFrined,ui->messageListDialog->parentWidget());
        QListWidgetItem* item = new QListWidgetItem(ui->messageListDialog);
        dealMessage(messageW, item, data, time, QNChatMessage::User_She);
        messageW->setTextSuccess();
    }

    ui->messageListDialog->setCurrentRow(ui->messageListDialog->count()-1);
}

void DialogMessage::dealMessageTime(QString curMsgTime){
    bool isShowTime = false;
    if(ui->messageListDialog->count() > 0) {
        QListWidgetItem* lastItem = ui->messageListDialog->item(ui->messageListDialog->count() - 1);
        QNChatMessage* messageW = (QNChatMessage*)ui->messageListDialog->itemWidget(lastItem);
        int lastTime = messageW->time().toInt();
        int curTime = curMsgTime.toInt();
        qDebug() << "curTime lastTime:" << curTime - lastTime;
        isShowTime = ((curTime - lastTime) > 60); // 两个消息相差一分钟
        //        isShowTime = true;
    } else {
        isShowTime = true;
    }
    if(isShowTime) {
        QNChatMessage* messageTime = new QNChatMessage(this->user,this->currentFrined,ui->messageListDialog->parentWidget());
        QListWidgetItem* itemTime = new QListWidgetItem(ui->messageListDialog);

        QSize size = QSize(641, 40);
        messageTime->resize(size);
        itemTime->setSizeHint(size);
        messageTime->setText(curMsgTime, curMsgTime, size, QNChatMessage::User_Time);
        ui->messageListDialog->setItemWidget(itemTime, messageTime);
    }
}

// 消息处理
void DialogMessage::dealMessage(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type){
    messageW->setFixedWidth(641);
    QSize size = messageW->fontRect(text);
    item->setSizeHint(size);
    messageW->setText(text, time, size, type);
    ui->messageListDialog->setItemWidget(item, messageW);
    messageW->setTextSuccess();
}

