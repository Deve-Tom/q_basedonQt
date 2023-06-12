
#ifndef FRIENDITEM_H
#define FRIENDITEM_H

#include <QListWidgetItem>
#include <QLabel>
#include <QWidget>
#include <QHBoxLayout>
#include <QWidget>
#include <QListView>
#include <QCompleter>


class FriendItem:public QWidget{
public:
    explicit FriendItem(QString name, QString signature, QPixmap avatar);
    ~FriendItem()=default;
};

#endif // FRIENDITEM_H
