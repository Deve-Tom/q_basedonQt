#include "mainwindow.h"
#include "ui_mainwindow.h"

mainWindow::mainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainWindow){
    ui->setupUi(this);

    initUI();
}

mainWindow::~mainWindow(){
    delete ui;
}

void mainWindow::initUI(){
    // 让窗口透明
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground,true);

    // 设置listWidget的情况
    ui->friendListWidget->setResizeMode(QListView::Adjust);
    ui->messageList->setResizeMode(QListView::Adjust);
    ui->friendListWidget->setViewMode(QListView::IconMode);
    ui->messageList->setViewMode(QListView::IconMode);
    ui->friendListWidget->setMovement(QListView::Static);
    ui->messageList->setMovement(QListView::Static);

    // 设置窗口的比例
    // QList<int>sizes;
    // sizes<<352<<831;
    // ui->messageSplider->setSizes(sizes);
    // ui->friendListSplider->setSizes(sizes);

    // 设置窗口阴影
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
    effect->setOffset(0,0);
    effect->setColor(Qt::black);
    effect->setBlurRadius(15);
    ui->backwidget->setGraphicsEffect(effect);

    // 在Message响应窗口中生成对话窗口——并隐藏
    this->dialogWindow = new DialogMessage(this->ui->messagePageWidget);
    this->dialogWindow->resize(831,788);
    this->dialogWindow->hide();
    //this->dialogWindow->move(0,50);

    // 默认进入界面在消息展示处
    on_MessageButton_clicked();

    // 好友列表label背景图
    this->backImgFriendList = new QLabel(ui->friendListShow);
    this->backImgFriendList->move(QPoint(290,190));
    this->backImgFriendList->resize(QSize(133,164));
    QPixmap pixmap(":/backGround/img/qqBackGround.png");
    pixmap = pixmap.scaled(QSize(133,164),Qt::KeepAspectRatio,Qt::SmoothTransformation);
    this->backImgFriendList->setPixmap(pixmap);

    this->friendIDLabelShow = new QLabel(ui->messagePage);
    this->friendIDLabelShow->move(QPoint(350,39));
    this->friendIDLabelShow->resize(QSize(212,39));
    // this->friendIDLabelShow->setText("测试");
}

// 好友列表初始化
void mainWindow::getFriendList(){
    // 获取用户的好友列表数据
    QJsonObject userID;
    userID.insert("user_id",std::get<0>(this->userData).toInt());
    QJsonObject data = this->net->sendRequestPost(userID,"/user/friend_view/");

    // json数组提取
    if(data.value("status_msg").toString()=="view success"){
        QJsonArray friendInfo = data.value("friends").toArray();
        foreach(const QJsonValue&infoTemp,friendInfo){
            QJsonObject objTemp = infoTemp.toObject();

            // 获取好友头像
            QJsonObject temp;
            temp.insert("test",false);
            temp.insert("download","");
            temp.insert("content",objTemp.value("user_avatar").toString());

            QByteArray data = this->net->sendRequestGetFile(temp,"/file/");
            QBuffer buffer(&data);
            buffer.open(QIODevice::ReadOnly);
            QImageReader reader(&buffer,"png");
            QPixmap pix = QPixmap::fromImage(reader.read());

            // 设置列表
            addFriendListItem(pix,objTemp.value("nickname").toString()
                            ,objTemp.value("person_signature").toString(),
                            objTemp.value("friend_id").toInt());
        }
    }
}

void mainWindow::historyMessageList(){

}

// 设置每一个好友的item情况
void mainWindow::addFriendListItem(QPixmap pixdata, const QString &nickname, const QString &signature, int currentID){
    ItemWidget *itemWidget = new ItemWidget(this);
    itemWidget->setData(pixdata,nickname,signature,currentID);
    QListWidgetItem *item = new QListWidgetItem();
    item->setSizeHint(QSize(316,90));
    ui->friendListWidget->addItem(item);
    ui->friendListWidget->setItemWidget(item,itemWidget);

    connect(itemWidget,&ItemWidget::currentID,this,&mainWindow::debug);
    connect(itemWidget,&ItemWidget::currentID,this,&mainWindow::goToMessageChat);
}

// 设置通信好友的消息item情况
void mainWindow::addHistroyListItem(QPixmap pixdata, const QString &nickname, const QString &signature, int currentID){
    ItemWidget *itemWidget = new ItemWidget(this);
    itemWidget->setData(pixdata,nickname,signature,currentID);
    QListWidgetItem *item = new QListWidgetItem();
    item->setSizeHint(QSize(316,90));
    ui->messageList->addItem(item);
    ui->messageList->setItemWidget(item,itemWidget);

    // 添加消息界面消息函数
    connect(itemWidget,&ItemWidget::currentID,this,&mainWindow::beginChat);
}


// 绘制窗口
void mainWindow::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);

    QPainterPath path;
    path.addRoundedRect(rect(),10,10);
    painter.fillPath(path,QBrush(QColor(0,0,0,0)));

    QWidget::paintEvent(event);
}

// 鼠标点击事件重写——让其可以进行窗口移动
void mainWindow::mousePressEvent(QMouseEvent *event) {
    if (Qt::LeftButton == event->button()) {
        m_dragging = true;
        m_dragPos = event->globalPosition().toPoint() - frameGeometry().topLeft();
        event->accept();
    }
}

// 鼠标点击事件重写——让其可以进行窗口移动
void mainWindow::mouseMoveEvent(QMouseEvent *event) {
    if (m_dragging) {
        move(event->globalPosition().toPoint() - m_dragPos);
        event->accept();
    }
}

// 鼠标点击事件重写——让其可以进行窗口移动
void mainWindow::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        m_dragging = false;
        event->accept();
    }
}

// 保存当前用户登录信息
void mainWindow::userInfo(std::tuple<QString, QString, QString> userInforData){
    this->userData=userInforData;
//    qDebug()<<std::get<0>(this->userData)<<" "<<std::get<1>(this->userData);
}

// 设置当前网络--并作初始化
void mainWindow::setNet(netService *net){
    this->net = net;

    // 获取用户信息
    QJsonObject user;
    user.insert("user_id",std::get<0>(this->userData));
    user.insert("token",std::get<1>(this->userData));
    QJsonObject userData = this->net->sendRequestGetInfo(user,"/user/");

    // 设置界面元素
    // 初始化个人头像
    if(userData.value("status_code")==200){
        QJsonObject temp;
        temp.insert("test",false);
        temp.insert("download","");
        temp.insert("content",userData.value("user").toObject().value("avatar").toString());

        QByteArray data = this->net->sendRequestGetFile(temp,"/file/");
        QBuffer buffer(&data);
        buffer.open(QIODevice::ReadOnly);
        QImageReader reader(&buffer,"png");
        QImage img = reader.read();
        if(!img.isNull()){
            QPixmap pix = QPixmap::fromImage(img);
            ui->userImage->setAlignment(Qt::AlignCenter);
            ui->userImage->setStyleSheet("border-radius:50px;");
            ui->userImage->setPixmap(pix.scaled(ui->userImage->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation));
        }
    }

    // 初始化好友列表
    getFriendList();
    // 初始化消息记录
    historyMessageList();
}

void mainWindow::goToMessageChat(int data){
    QJsonObject currentInfo;
    currentInfo.insert("user_id",QString::number(data));
    currentInfo.insert("token",std::get<1>(this->userData));

    QJsonObject friendInfo = this->net->sendRequestGetInfo(currentInfo,"/user/");

    // 设置条目
    if(friendInfo.value("status_code")==200){
        // 头像问题可能出自于这里
        QJsonObject temp;
        temp.insert("test",false);
        temp.insert("download","");
        temp.insert("content",friendInfo.value("user").toObject().value("avatar").toString());

        QByteArray data = this->net->sendRequestGetFile(temp,"/file/");
        QBuffer buffer(&data);
        buffer.open(QIODevice::ReadOnly);
        QImageReader reader(&buffer,"png");
        QPixmap pix = QPixmap::fromImage(reader.read());

        // 设置列表
        addHistroyListItem(pix,friendInfo.value("user").toObject().value("nickname").toString()
                          ,friendInfo.value("user").toObject().value("signature").toString(),
                          friendInfo.value("user").toObject().value("user_id").toInt());

    }

    on_MessageButton_clicked();
}

// debug测试
void mainWindow::debug(int data){
    qDebug()<<data<<" 被点击了\n";
}

// 初始化聊天界面
void mainWindow::beginChat(int friend_id){
    this->friendIDLabelShow->setText(QString::number(friend_id));

    this->dialogWindow->show();
    this->dialogWindow->setNet(this->net);
    this->dialogWindow->reset(friend_id,std::get<0>(this->userData).toInt(),std::get<1>(this->userData));
}

// 关闭窗口
void mainWindow::on_closePushButton_clicked(){
    this->close();
}

// 最小化窗口
void mainWindow::on_minPushButton_clicked(){
    this->showMinimized();
}

// 关闭窗口
void mainWindow::on_closePushButton2_clicked(){
    this->close();
}

// 最小化窗口
void mainWindow::on_minPushButton2_clicked(){
    this->showMinimized();
}

// message窗口切换
void mainWindow::on_MessageButton_clicked(){
    // 设置当前窗口为messagepageWidget
    ui->changeWidget->setCurrentIndex(0);
    ui->MessageButton->setChecked(true);
    ui->ListButton->setChecked(false);
}

// 好友列表切换
void mainWindow::on_ListButton_clicked(){
    // 设置当前窗口为friendListWidget
    ui->changeWidget->setCurrentIndex(1);
    ui->ListButton->setChecked(true);
    ui->MessageButton->setChecked(false);
}

