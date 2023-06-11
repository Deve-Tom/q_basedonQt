#include "mainwindow.h"
#include "ui_mainwindow.h"

mainWindow::mainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainWindow)
{
    ui->setupUi(this);

    initUI();
}

mainWindow::~mainWindow()
{
    delete ui;
}

void mainWindow::initUI()
{
    // 让窗口透明
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground,true);

    // 设置窗口的比例
    QList<int>sizes;
    sizes<<352<<831;
    ui->messageSplider->setSizes(sizes);
    ui->friendListSplider->setSizes(sizes);

    this->dialogWindow = new DialogMessage(this->ui->messagePageWidget);
    this->dialogWindow->setBaseSize(831,788);
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
