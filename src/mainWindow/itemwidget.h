#ifndef ITEMWIDGET_H
#define ITEMWIDGET_H

#include <QWidget>

namespace Ui {
class ItemWidget;
}

class ItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ItemWidget(QWidget *parent = nullptr);
    void setData(QPixmap pixdata,const QString& nickname,const QString& signature,int currentID);
    ~ItemWidget();

private:
    Ui::ItemWidget *ui;
    int currentUserID;

    // QWidget interface
protected:
    void mouseDoubleClickEvent(QMouseEvent *event)override;

signals:
    void currentID(int id);
};

#endif // ITEMWIDGET_H
