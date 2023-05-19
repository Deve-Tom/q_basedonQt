//
// Created by 23148 on 2023/5/6.
//

#ifndef Q_BASEDONQT_LOGINWIDGET_H
#define Q_BASEDONQT_LOGINWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPainterPath>
#include <QMouseEvent>
#include <QLineEdit>
#include "../webService/netService.h"

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
};


#endif//Q_BASEDONQT_LOGINWIDGET_H
