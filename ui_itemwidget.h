/********************************************************************************
** Form generated from reading UI file 'itemwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMWIDGET_H
#define UI_ITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemWidget
{
public:
    QWidget *widget;
    QLabel *picture;
    QLabel *nicknameLabel;
    QLabel *signatureLabel;

    void setupUi(QWidget *ItemWidget)
    {
        if (ItemWidget->objectName().isEmpty())
            ItemWidget->setObjectName("ItemWidget");
        ItemWidget->resize(400, 66);
        ItemWidget->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(ItemWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-10, 0, 411, 71));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget:hover{\n"
" background-color: rgb(235, 235, 235);\n"
"}"));
        picture = new QLabel(widget);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(40, 10, 54, 54));
        picture->setMinimumSize(QSize(54, 54));
        picture->setMaximumSize(QSize(54, 54));
        nicknameLabel = new QLabel(widget);
        nicknameLabel->setObjectName("nicknameLabel");
        nicknameLabel->setGeometry(QRect(110, 20, 131, 20));
        nicknameLabel->setStyleSheet(QString::fromUtf8("QLabel#nicknameLabel{\n"
"	font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        signatureLabel = new QLabel(widget);
        signatureLabel->setObjectName("signatureLabel");
        signatureLabel->setGeometry(QRect(110, 40, 251, 20));
        signatureLabel->setStyleSheet(QString::fromUtf8("QLabel#signatureLabel{\n"
"	color: rgb(153, 153, 153);\n"
"}"));

        retranslateUi(ItemWidget);

        QMetaObject::connectSlotsByName(ItemWidget);
    } // setupUi

    void retranslateUi(QWidget *ItemWidget)
    {
        ItemWidget->setWindowTitle(QCoreApplication::translate("ItemWidget", "Form", nullptr));
        picture->setText(QString());
        nicknameLabel->setText(QString());
        signatureLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ItemWidget: public Ui_ItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMWIDGET_H
