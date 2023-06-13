#include "itemwidget.h"
#include "ui_itemwidget.h"

ItemWidget::ItemWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ItemWidget)
{
    ui->setupUi(this);
}

// 设置数据
void ItemWidget::setData(QPixmap pixdata, const QString &nickname, const QString &signature,int currentID){
    this->currentUserID = currentID;
    ui->nicknameLabel->setText(nickname);
    ui->signatureLabel->setText(signature);
    int iWidth = ui->picture->width();
    int iHeight = ui->picture->height();
    QPixmap tempImg {pixdata.scaled(iWidth,iHeight,Qt::IgnoreAspectRatio,Qt::SmoothTransformation)};
    ui->picture->setPixmap(tempImg);
}

ItemWidget::~ItemWidget()
{
    delete ui;
}

// 重写鼠标双击事件
void ItemWidget::mouseDoubleClickEvent(QMouseEvent *event){
    emit this->currentID(this->currentUserID);
}
