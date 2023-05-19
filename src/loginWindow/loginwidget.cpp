//
// Created by 23148 on 2023/5/6.
//

// You may need to build the project (run Qt uic code generator) to get "ui_loginWidget.h" resolved

#include "loginwidget.h"
#include "ui_loginwidget.h"

loginWidget::loginWidget(QWidget *parent) : QWidget(parent), ui(new Ui::loginWidget) {
    ui->setupUi(this);
    this->net = new netService("http://127.0.0.1:4523/holaa",this);
    initUi();
    initPicture();

    connect(ui->IDComboBox,&QComboBox::currentTextChanged,this,&loginWidget::on_currentDataChanged);
    connect(ui->passwordLineEdit,&QLineEdit::textChanged,this,&loginWidget::on_currentDataChanged);
    connect(ui->pushButton,&QPushButton::clicked,this,&loginWidget::on_pushLogin);
    connect(ui->radioButton,&QRadioButton::clicked,this,&loginWidget::on_radioBtn);
}

loginWidget::~loginWidget() {
    delete ui;
}

void loginWidget::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);

    // 设置背景图片
    QPixmap pixmap(":/backGround/src/loginWindow/assets/static/login_background.png");
    painter.drawPixmap(rect(),pixmap);

    QPainterPath path;
    path.addRoundedRect(rect(),10,10);
    painter.fillPath(path,QBrush(QColor(0,0,0,0)));

    QWidget::paintEvent(event);
}

void loginWidget::mousePressEvent(QMouseEvent *event) {
    if (Qt::LeftButton == event->button()) {
        m_dragging = true;
        m_dragPos = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void loginWidget::mouseMoveEvent(QMouseEvent *event) {
    if (m_dragging) {
        move(event->globalPos() - m_dragPos);
        event->accept();
    }
}

void loginWidget::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        m_dragging = false;
        event->accept();
    }
}

void loginWidget::initUi() {
    this->setWindowFlag(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    // ui->IDComboBox->setAlignment(Qt::AlignCenter);
    ui->passwordLineEdit->setAlignment(Qt::AlignCenter);
    ui->pictureLabel->setAlignment(Qt::AlignCenter);
    ui->pictureLabel->resize(86,83);
    ui->pictureLabel->move(118,67);
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
    QLineEdit* lineEdit = ui->IDComboBox->lineEdit();
    lineEdit->setPlaceholderText("请输入账号");
    ui->passwordLineEdit->setPlaceholderText("请输入密码");
    lineEdit->setAlignment(Qt::AlignCenter);
}

void loginWidget::initPicture() {
    QPixmap pixmap(":/backGround/src/loginWindow/assets/static/default.png");
    pixmap = pixmap.scaled(ui->pictureLabel->size(),Qt::KeepAspectRatio);
    ui->pictureLabel->setPixmap(pixmap);
}

void loginWidget::on_currentDataChanged(const QString &arg1) {
    Q_UNUSED(arg1)
    if(!ui->IDComboBox->currentText().isEmpty()&&!ui->passwordLineEdit->text().isEmpty()&&ui->radioButton->isChecked()) {
        ui->pushButton->setEnabled(true);
        ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(4, 157, 255); border-radius:5px;border-with:0;color: rgb(255, 255, 255);border-style:outset};");
    }
    else {
        ui->pushButton->setEnabled(false);
        ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(191, 224, 250); border-radius:5px;border-with:0;color: rgb(255, 255, 255);border-style:outset};");
    }
}

void loginWidget::on_pushLogin() {
    auto id = ui->IDComboBox->currentText();
    auto password = ui->passwordLineEdit->text();

    qDebug()<<id<<"\n";
    QJsonObject jsonObj;
    jsonObj.insert("user_id",id);
    jsonObj.insert("password",password);

    //qDebug()<<"ueser_id-json:"<<jsonObj["user_id"]<<" "<<"password-json:"<<jsonObj["password"]<<"\n";
    auto data=net->sendRequest(jsonObj,"/user/login/");

    qDebug()<<data["status_code"]<<" "<<data["status_msg"]<<" "<<data["token"];
}

void loginWidget::on_radioBtn(bool checked) {
    Q_UNUSED(checked)
    if(!ui->IDComboBox->currentText().isEmpty()&&!ui->passwordLineEdit->text().isEmpty()&&ui->radioButton->isChecked()) {
        ui->pushButton->setEnabled(true);
        ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(4, 157, 255); border-radius:5px;border-with:0;color: rgb(255, 255, 255);border-style:outset};");
    }
    else {
        ui->pushButton->setEnabled(false);
        ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(191, 224, 250); border-radius:5px;border-with:0;color: rgb(255, 255, 255);border-style:outset};");
    }
}
