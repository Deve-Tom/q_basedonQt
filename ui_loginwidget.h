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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginWidget
{
public:
    QLineEdit *passwordLineEdit;
    QPushButton *pushButton;
    QComboBox *IDComboBox;
    QLabel *pictureLabel;
    QRadioButton *radioButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *loginWidget)
    {
        if (loginWidget->objectName().isEmpty())
            loginWidget->setObjectName("loginWidget");
        loginWidget->setEnabled(true);
        loginWidget->resize(320, 448);
        loginWidget->setMinimumSize(QSize(320, 448));
        loginWidget->setMaximumSize(QSize(320, 448));
        QFont font;
        font.setBold(true);
        loginWidget->setFont(font);
        loginWidget->setStyleSheet(QString::fromUtf8("#loginWidget{\n"
"border-image: url(:/backGround/src/loginWindow/assets/static/login_background.png);\n"
"}\n"
""));
        passwordLineEdit = new QLineEdit(loginWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(31, 222, 255, 44));
        passwordLineEdit->setMinimumSize(QSize(255, 44));
        passwordLineEdit->setMaximumSize(QSize(255, 44));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        passwordLineEdit->setFont(font1);
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:8px;\n"
"border-with:0;\n"
"border-style:outset;\n"
"font: 400 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(138, 138, 138);\n"
"}"));
        pushButton = new QPushButton(loginWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(32, 322, 256, 35));
        pushButton->setMinimumSize(QSize(256, 35));
        pushButton->setMaximumSize(QSize(246, 35));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"background-color: rgb(191, 224, 250);\n"
"border-with:0;\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset\n"
"}"));
        IDComboBox = new QComboBox(loginWidget);
        IDComboBox->setObjectName("IDComboBox");
        IDComboBox->setGeometry(QRect(31, 167, 255, 44));
        IDComboBox->setMinimumSize(QSize(255, 44));
        IDComboBox->setMaximumSize(QSize(255, 44));
        IDComboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border-radius:5px;\n"
"border-with:0;\n"
"font: 400 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(138, 138, 138);\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down{\n"
"border-radius:5px;\n"
"border-with:0;\n"
"image url(:/backGround/src/loginWindow/assets/static/down.png);\n"
"}"));
        IDComboBox->setEditable(true);
        pictureLabel = new QLabel(loginWidget);
        pictureLabel->setObjectName("pictureLabel");
        pictureLabel->setGeometry(QRect(120, 80, 54, 16));
        radioButton = new QRadioButton(loginWidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(31, 284, 241, 13));
        radioButton->setMinimumSize(QSize(241, 13));
        radioButton->setMaximumSize(QSize(241, 13));
        radioButton->setStyleSheet(QString::fromUtf8("color: rgb(179, 179, 179);\n"
"\n"
"QRadioButton::disabled{\n"
"border-radius: 5;\n"
"color:rgb(0,0,0,0);\n"
"}"));
        label = new QLabel(loginWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(124, 283, 54, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(4, 157, 255);"));
        label_2 = new QLabel(loginWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(173, 283, 16, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(179, 179, 179);"));
        label_3 = new QLabel(loginWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(186, 283, 91, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(4, 157, 255);"));

        retranslateUi(loginWidget);

        QMetaObject::connectSlotsByName(loginWidget);
    } // setupUi

    void retranslateUi(QWidget *loginWidget)
    {
        loginWidget->setWindowTitle(QCoreApplication::translate("loginWidget", "loginWidget", nullptr));
        passwordLineEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("loginWidget", "\347\231\273\345\275\225", nullptr));
        IDComboBox->setCurrentText(QString());
        pictureLabel->setText(QString());
        radioButton->setText(QCoreApplication::translate("loginWidget", "\345\267\262\351\230\205\350\257\273\345\271\266\345\220\214\346\204\217", nullptr));
        label->setText(QCoreApplication::translate("loginWidget", "\346\234\215\345\212\241\345\215\217\350\256\256", nullptr));
        label_2->setText(QCoreApplication::translate("loginWidget", "\345\222\214", nullptr));
        label_3->setText(QCoreApplication::translate("loginWidget", "QQ\351\232\220\347\247\201\344\277\235\346\212\244\346\214\207\345\274\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginWidget: public Ui_loginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
