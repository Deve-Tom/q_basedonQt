#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QBuffer>
#include <QImageReader>
#include <QPainter>
#include <QPainterPath>
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <utility>
#include "../messageWindow/dialogmessage.h"
#include "../webService/netService.h"
#include "itemwidget.h"

namespace Ui {
class mainWindow;
}

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainWindow(QWidget *parent = nullptr);
    ~mainWindow();

private slots:
    void on_closePushButton_clicked();

    void on_minPushButton_clicked();

    void on_closePushButton2_clicked();

    void on_minPushButton2_clicked();

    void on_MessageButton_clicked();

    void on_ListButton_clicked();

private:
    Ui::mainWindow *ui;
    bool m_dragging = false;
    QPoint m_dragPos;
    DialogMessage* dialogWindow;
    netService* net;
    std::tuple<QString,QString,QString>userData;

private:
    void initUI();
    void getFriendList();
    void historyMessageList();
    void addFriendListItem(QPixmap pixdata,const QString& nickname,const QString& signature,int currentID);
    void paintEvent(QPaintEvent *event)override;
    void mousePressEvent(QMouseEvent *event)override;
    void mouseMoveEvent(QMouseEvent *event)override;
    void mouseReleaseEvent(QMouseEvent *event)override;

public slots:
    void userInfo(std::tuple<QString,QString,QString> userInforData);
    void setNet(netService* net);
    void debug(int data);
};

#endif // MAINWINDOW_H
