
#include "frienditem.h"

FriendItem::FriendItem(QString name, QString signature, QPixmap avatar){
    QLabel *nameLabel = new QLabel(name);
    QLabel *signatureLabel = new QLabel(signature);
    QLabel *avatarLabel = new QLabel();
    avatarLabel->setPixmap(avatar.scaled(50, 50));
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(avatarLabel);
    layout->addWidget(nameLabel);
    layout->addWidget(signatureLabel);
//    QWidget *widget = new QWidget();
//    widget->setLayout(layout);
//    setSizeHint(widget->sizeHint());
//    setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
//    setWidget(widget);
}
