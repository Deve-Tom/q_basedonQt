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

    QPainterPath path;
    path.addRoundedRect(rect(),10,10);
    painter.fillPath(path,QBrush(QColor(0,0,0,0)));

    QWidget::paintEvent(event);
}

void loginWidget::mousePressEvent(QMouseEvent *event) {
    if (Qt::LeftButton == event->button()) {
        m_dragging = true;
        m_dragPos = event->globalPosition().toPoint() - frameGeometry().topLeft();
        event->accept();
    }
}

void loginWidget::mouseMoveEvent(QMouseEvent *event) {
    if (m_dragging) {
        move(event->globalPosition().toPoint() - m_dragPos);
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
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground,true);
    ui->passwordLineEdit->setAlignment(Qt::AlignCenter);
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);

    // 设置窗口阴影
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
    effect->setOffset(0,0);
    effect->setColor(Qt::black);
    effect->setBlurRadius(20);
    ui->widget->setGraphicsEffect(effect);

    // 设置头像位置
    ui->pictureLabel->setAlignment(Qt::AlignCenter);
    ui->pictureLabel->resize(86,83);
    ui->pictureLabel->move(118,67);

    // 设置提示信息
    QLineEdit* lineEdit = ui->IDComboBox->lineEdit();
    lineEdit->setPlaceholderText("请输入账号");
    ui->passwordLineEdit->setPlaceholderText("请输入密码");
    lineEdit->setAlignment(Qt::AlignCenter);

    // 为QCombobox添加清除按钮
    this->clearButton = new QToolButton(ui->IDComboBox);
    clearButton->setIcon(QIcon(":/button/img/close-button-normal.png"));
    clearButton->setCursor(Qt::ArrowCursor);
    clearButton->setStyleSheet("QToolButton { border: none; padding: 0px; }");
    const int frameWidth = ui->IDComboBox->style()->pixelMetric(QStyle::PM_DefaultFrameWidth);
    lineEdit->setStyleSheet(QString("QLineEdit{padding-right:%1px;}").arg(clearButton->sizeHint().width()+frameWidth+1));
    QRect r = lineEdit->rect();
    clearButton->setGeometry(QRect(r.right(), r.top(), clearButton->sizeHint().width(), r.height()));
    clearButton->hide();
}

void loginWidget::initPicture() {
    QPixmap pixmap(":/backGround/src/loginWindow/assets/static/default.png");
    pixmap = pixmap.scaled(ui->pictureLabel->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation);
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

    QJsonObject jsonObj;
    jsonObj.insert("user_id",id);
    jsonObj.insert("password",password);

    auto data=net->sendRequest(jsonObj,"/user/login/");
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

void loginWidget::on_closePushButton_clicked()
{
    // 关闭本窗口
    this->close();
}


void loginWidget::on_minPushButton_clicked()
{
    // 最小化本窗口
    this->showMinimized();
}

