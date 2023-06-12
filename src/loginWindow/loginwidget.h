#ifndef Q_BASEDONQT_LOGINWIDGET_H
#define Q_BASEDONQT_LOGINWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPainterPath>
#include <QMouseEvent>
#include <QLineEdit>
#include <QToolButton>
#include <QGraphicsDropShadowEffect>
#include "../webService/netService.h"
#include "../utils/jsonfilecoinfig.h"
#include "../utils/jsontools.h"
#include "../utils/userfile.h"
#include "../mainWindow/mainwindow.h"
#include "../utils/QJsonWebSocket/qjsonwebtoken.h"
#include <utility>

QT_BEGIN_NAMESPACE
namespace Ui {
    class loginWidget;
}
QT_END_NAMESPACE

class loginWidget : public QWidget {
    Q_OBJECT

public:
    explicit loginWidget(QWidget *parent = nullptr);
    ~loginWidget() override;
private:
    bool m_dragging = false;
    QPoint m_dragPos;
    netService* net;
    QToolButton* clearButton;
    UserFile *FileControler;
    mainWindow* mainWidget;

private:
    Ui::loginWidget *ui;
    void initUi();
    void initPicture();
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event)override;

private slots:
    void on_pushLogin();
    void on_currentDataChanged(const QString &arg1);
    void on_radioBtn(bool checked);
    void on_closePushButton_clicked();
    void on_minPushButton_clicked();

signals:
    void useLogin(std::tuple<QString,QString,QString> userInfo);
    void sendNet(netService* net);
};


#endif//Q_BASEDONQT_LOGINWIDGET_H
