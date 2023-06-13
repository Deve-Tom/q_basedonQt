/********************************************************************************
** Form generated from reading UI file 'dialogmessage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMESSAGE_H
#define UI_DIALOGMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogMessage
{
public:
    QTextBrowser *MessageTextBrowser;
    QTextEdit *messageEditt;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *emotionPushButton;
    QPushButton *screenCutPushButton;
    QPushButton *filePushButton;
    QPushButton *picturePushButton;
    QPushButton *voicePushButton;
    QSpacerItem *menuSpacer;
    QPushButton *historyPushButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *senMessage;

    void setupUi(QWidget *DialogMessage)
    {
        if (DialogMessage->objectName().isEmpty())
            DialogMessage->setObjectName("DialogMessage");
        DialogMessage->resize(647, 561);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogMessage->sizePolicy().hasHeightForWidth());
        DialogMessage->setSizePolicy(sizePolicy);
        DialogMessage->setMaximumSize(QSize(834, 794));
        DialogMessage->setStyleSheet(QString::fromUtf8(""));
        MessageTextBrowser = new QTextBrowser(DialogMessage);
        MessageTextBrowser->setObjectName("MessageTextBrowser");
        MessageTextBrowser->setGeometry(QRect(1, 1, 641, 301));
        MessageTextBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser#MessageTextBrowser{\n"
"	background-color: rgb(242, 242, 242);\n"
"	border: one;\n"
"	border-bottom: 1px solid lightgray;\n"
"}"));
        messageEditt = new QTextEdit(DialogMessage);
        messageEditt->setObjectName("messageEditt");
        messageEditt->setGeometry(QRect(1, 343, 641, 141));
        messageEditt->setStyleSheet(QString::fromUtf8("QTextEdit#messageEditt{\n"
"	background-color: rgb(242, 242, 242);\n"
"	border: none;\n"
"}"));
        widget = new QWidget(DialogMessage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(1, 303, 641, 40));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        emotionPushButton = new QPushButton(widget);
        emotionPushButton->setObjectName("emotionPushButton");
        emotionPushButton->setMinimumSize(QSize(38, 38));
        emotionPushButton->setMaximumSize(QSize(38, 38));
        emotionPushButton->setStyleSheet(QString::fromUtf8("QPushButton#emotionPushButton{\n"
"	border: one;\n"
"	image: url(:/mainMenu/img/emotion1.png);\n"
"}\n"
"\n"
"QPushButton#emotionPushButton:hover{\n"
"	border: one;\n"
"	\n"
"	image: url(:/mainMenu/img/emotion2.png);\n"
"}"));

        horizontalLayout->addWidget(emotionPushButton);

        screenCutPushButton = new QPushButton(widget);
        screenCutPushButton->setObjectName("screenCutPushButton");
        screenCutPushButton->setMinimumSize(QSize(38, 38));
        screenCutPushButton->setMaximumSize(QSize(38, 38));
        screenCutPushButton->setStyleSheet(QString::fromUtf8("QPushButton#screenCutPushButton{\n"
"	image: url(:/mainMenu/img/screencut1.png);\n"
"	border: one;\n"
"}\n"
"\n"
"QPushButton#screenCutPushButton:hover{\n"
"	image: url(:/mainMenu/img/screencut2.png);\n"
"	border: one;\n"
"}"));

        horizontalLayout->addWidget(screenCutPushButton);

        filePushButton = new QPushButton(widget);
        filePushButton->setObjectName("filePushButton");
        filePushButton->setMinimumSize(QSize(38, 38));
        filePushButton->setMaximumSize(QSize(38, 38));
        filePushButton->setStyleSheet(QString::fromUtf8("QPushButton#filePushButton{\n"
"	image: url(:/mainMenu/img/file.png);\n"
"	border: one;\n"
"}\n"
"\n"
"QPushButton#filePushButton:hover{\n"
"	image: url(:/mainMenu/img/fileO.png);\n"
"	border: one;\n"
"}"));

        horizontalLayout->addWidget(filePushButton);

        picturePushButton = new QPushButton(widget);
        picturePushButton->setObjectName("picturePushButton");
        picturePushButton->setMinimumSize(QSize(38, 38));
        picturePushButton->setMaximumSize(QSize(38, 38));
        picturePushButton->setStyleSheet(QString::fromUtf8("QPushButton#picturePushButton{\n"
"	image: url(:/mainMenu/img/picture1.png);\n"
"	border: one;\n"
"}\n"
"\n"
"QPushButton#picturePushButton:hover{\n"
"	image: url(:/mainMenu/img/picture2.png);\n"
"	border: one;\n"
"}"));

        horizontalLayout->addWidget(picturePushButton);

        voicePushButton = new QPushButton(widget);
        voicePushButton->setObjectName("voicePushButton");
        voicePushButton->setMinimumSize(QSize(38, 38));
        voicePushButton->setMaximumSize(QSize(38, 38));
        voicePushButton->setStyleSheet(QString::fromUtf8("QPushButton#voicePushButton{\n"
"	image: url(:/mainMenu/img/voice1.png);\n"
"	border: one;\n"
"}\n"
"\n"
"QPushButton#voicePushButton:hover{\n"
"	\n"
"	image: url(:/mainMenu/img/voice2.png);\n"
"	border: one;\n"
"}"));

        horizontalLayout->addWidget(voicePushButton);

        menuSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(menuSpacer);

        historyPushButton = new QPushButton(widget);
        historyPushButton->setObjectName("historyPushButton");
        historyPushButton->setMinimumSize(QSize(38, 38));
        historyPushButton->setMaximumSize(QSize(38, 38));
        historyPushButton->setStyleSheet(QString::fromUtf8("QPushButton#historyPushButton{\n"
"	border: one;\n"
"	image: url(:/mainMenu/img/history1.png);\n"
"}\n"
"\n"
"QPushButton#historyPushButton:hover{\n"
"	border: one;\n"
"	image: url(:/mainMenu/img/hisrory2.png);\n"
"}"));

        horizontalLayout->addWidget(historyPushButton);

        widget1 = new QWidget(DialogMessage);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(1, 490, 611, 36));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        senMessage = new QPushButton(widget1);
        senMessage->setObjectName("senMessage");
        senMessage->setMinimumSize(QSize(121, 34));
        senMessage->setMaximumSize(QSize(121, 34));
        senMessage->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:5px;\n"
"background-color: rgb(0, 153, 255);\n"
"border-with:0;\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset\n"
"}"));
        senMessage->setAutoDefault(false);

        horizontalLayout_2->addWidget(senMessage);


        retranslateUi(DialogMessage);

        QMetaObject::connectSlotsByName(DialogMessage);
    } // setupUi

    void retranslateUi(QWidget *DialogMessage)
    {
        DialogMessage->setWindowTitle(QCoreApplication::translate("DialogMessage", "Form", nullptr));
        emotionPushButton->setText(QString());
        screenCutPushButton->setText(QString());
        filePushButton->setText(QString());
        picturePushButton->setText(QString());
        voicePushButton->setText(QString());
        historyPushButton->setText(QString());
        senMessage->setText(QCoreApplication::translate("DialogMessage", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMessage: public Ui_DialogMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMESSAGE_H
