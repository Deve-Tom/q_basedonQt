/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginWidget
{
public:
    QVBoxLayout *lay_bg;
    QWidget *widget;
    QComboBox *IDComboBox;
    QLineEdit *passwordLineEdit;
    QLabel *label_3;
    QLabel *label;
    QRadioButton *radioButton;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *pictureLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *moreSelectionLabel;
    QFrame *line;
    QLabel *label_4;
    QPushButton *minPushButton;
    QPushButton *closePushButton;

    void setupUi(QWidget *loginWidget)
    {
        if (loginWidget->objectName().isEmpty())
            loginWidget->setObjectName("loginWidget");
        loginWidget->setEnabled(true);
        loginWidget->resize(347, 477);
        loginWidget->setMinimumSize(QSize(347, 477));
        loginWidget->setMaximumSize(QSize(347, 477));
        QFont font;
        font.setBold(false);
        loginWidget->setFont(font);
        loginWidget->setAutoFillBackground(false);
        loginWidget->setStyleSheet(QString::fromUtf8("#loginWidget\n"
"{\n"
"	background-color: rgb(243, 243, 243);  \n"
"	border-radius:20px 20px;   \n"
"}\n"
""));
        lay_bg = new QVBoxLayout(loginWidget);
        lay_bg->setObjectName("lay_bg");
        widget = new QWidget(loginWidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(320, 448));
        widget->setMaximumSize(QSize(320, 448));
        widget->setLayoutDirection(Qt::LeftToRight);
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"border-image: url(:/backGround/src/loginWindow/assets/static/login_background.png);\n"
"box-shadow: 2px 2px 5px rgba(0,0,0,0.5);\n"
"}\n"
""));
        IDComboBox = new QComboBox(widget);
        IDComboBox->setObjectName("IDComboBox");
        IDComboBox->setGeometry(QRect(31, 167, 255, 44));
        IDComboBox->setMinimumSize(QSize(255, 44));
        IDComboBox->setMaximumSize(QSize(255, 44));
        IDComboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border-radius:5px;\n"
"border-with:0;\n"
"padding-left: 32px;\n"
"font: 400 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(138, 138, 138);\n"
"background-color: rgba(255, 255, 255,50%);\n"
"}\n"
"\n"
"\n"
"QComboBox:drop-down{\n"
"	width: 29px;  \n"
"    height: 40px; \n"
"	image: url(:/button/img/icon_arrow_down.png);\n"
"}\n"
"\n"
"\n"
"QComboBox:focus{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        IDComboBox->setEditable(true);
        passwordLineEdit = new QLineEdit(widget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(31, 222, 255, 44));
        passwordLineEdit->setMinimumSize(QSize(255, 44));
        passwordLineEdit->setMaximumSize(QSize(255, 44));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        passwordLineEdit->setFont(font1);
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgba(255, 255, 255,50%);\n"
"border-radius:8px;\n"
"border-with:0;\n"
"border-style:outset;\n"
"font: 400 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(138, 138, 138);\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(185, 283, 91, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(4, 157, 255);"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(124, 283, 54, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(4, 157, 255);"));
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(32, 284, 241, 13));
        radioButton->setMinimumSize(QSize(241, 13));
        radioButton->setMaximumSize(QSize(241, 13));
        radioButton->setStyleSheet(QString::fromUtf8("color: rgb(179, 179, 179);\n"
"\n"
"QRadioButton::disabled{\n"
"border-radius: 5;\n"
"color:rgb(0,0,0,0);\n"
"}"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(172, 283, 16, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(179, 179, 179);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(32, 322, 256, 35));
        pushButton->setMinimumSize(QSize(256, 35));
        pushButton->setMaximumSize(QSize(246, 35));
        QFont font2;
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"background-color: rgb(191, 224, 250);\n"
"border-with:0;\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset\n"
"}"));
        pictureLabel = new QLabel(widget);
        pictureLabel->setObjectName("pictureLabel");
        pictureLabel->setGeometry(QRect(120, 80, 54, 16));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(90, 380, 139, 22));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        moreSelectionLabel = new QLabel(horizontalLayoutWidget);
        moreSelectionLabel->setObjectName("moreSelectionLabel");
        moreSelectionLabel->setStyleSheet(QString::fromUtf8("color: rgb(4, 157, 255);"));
        moreSelectionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(moreSelectionLabel);

        line = new QFrame(horizontalLayoutWidget);
        line->setObjectName("line");
        line->setFont(font);
        line->setStyleSheet(QString::fromUtf8("#line{\n"
"border-color: rgb(207, 207, 207);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-height: 0.5px;\n"
"}\n"
"QFrame#line{\n"
"border-height: 0.5px;\n"
"}\n"
""));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(4, 157, 255);"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        minPushButton = new QPushButton(widget);
        minPushButton->setObjectName("minPushButton");
        minPushButton->setGeometry(QRect(254, 0, 32, 32));
        minPushButton->setMinimumSize(QSize(32, 32));
        minPushButton->setMaximumSize(QSize(32, 32));
        minPushButton->setStyleSheet(QString::fromUtf8("QPushButton#minPushButton{\n"
"border: one;\n"
"image: url(:/button/img/minimize.png);\n"
"}"));
        closePushButton = new QPushButton(widget);
        closePushButton->setObjectName("closePushButton");
        closePushButton->setGeometry(QRect(288, 0, 32, 32));
        closePushButton->setMinimumSize(QSize(32, 32));
        closePushButton->setMaximumSize(QSize(32, 32));
        closePushButton->setStyleSheet(QString::fromUtf8("QPushButton#closePushButton{\n"
"border: one;\n"
"image: url(:/button/img/close-button-normal.png);\n"
"}\n"
"\n"
"QPushButton#closePushButton:hover{\n"
"image: url(:/button/img/close-button-hover.png);\n"
"}\n"
"\n"
"QPushButton#closePushButton:pressed{\n"
"	image: url(:/button/img/close-button-active.png);\n"
"}\n"
""));

        lay_bg->addWidget(widget);


        retranslateUi(loginWidget);

        QMetaObject::connectSlotsByName(loginWidget);
    } // setupUi

    void retranslateUi(QWidget *loginWidget)
    {
        loginWidget->setWindowTitle(QCoreApplication::translate("loginWidget", "loginWidget", nullptr));
        IDComboBox->setCurrentText(QString());
        passwordLineEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("loginWidget", "QQ\351\232\220\347\247\201\344\277\235\346\212\244\346\214\207\345\274\225", nullptr));
        label->setText(QCoreApplication::translate("loginWidget", "\346\234\215\345\212\241\345\215\217\350\256\256", nullptr));
        radioButton->setText(QCoreApplication::translate("loginWidget", "\345\267\262\351\230\205\350\257\273\345\271\266\345\220\214\346\204\217", nullptr));
        label_2->setText(QCoreApplication::translate("loginWidget", "\345\222\214", nullptr));
        pushButton->setText(QCoreApplication::translate("loginWidget", "\347\231\273\345\275\225", nullptr));
        pictureLabel->setText(QString());
        moreSelectionLabel->setText(QCoreApplication::translate("loginWidget", "\346\211\253\347\240\201\347\231\273\345\275\225", nullptr));
        label_4->setText(QCoreApplication::translate("loginWidget", "\346\233\264\345\244\232\351\200\211\351\241\271", nullptr));
        minPushButton->setText(QString());
        closePushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginWidget: public Ui_loginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
