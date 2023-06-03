/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *image;
    QPushButton *messagePushButton;
    QPushButton *listPushButton;
    QPushButton *channelPushButton;
    QPushButton *spacePushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *setingPushButton;
    QPushButton *filePushButton;
    QPushButton *mailPushhButton;
    QPushButton *collectPushButton;

    void setupUi(QWidget *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName("mainWindow");
        mainWindow->resize(1171, 797);
        mainWindow->setMinimumSize(QSize(660, 540));
        mainWindow->setMaximumSize(QSize(1980, 1060));
        mainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);"));
        layoutWidget = new QWidget(mainWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 61, 793));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        image = new QLabel(layoutWidget);
        image->setObjectName("image");
        image->setMinimumSize(QSize(50, 47));
        image->setMaximumSize(QSize(50, 47));

        verticalLayout->addWidget(image);

        messagePushButton = new QPushButton(layoutWidget);
        messagePushButton->setObjectName("messagePushButton");
        messagePushButton->setMinimumSize(QSize(57, 54));
        messagePushButton->setMaximumSize(QSize(57, 54));
        messagePushButton->setStyleSheet(QString::fromUtf8("QPushButton#messagePushButton{\n"
"	image: url(:/button/img/normal_message.png);\n"
"}\n"
"\n"
"QPushButton#messagePushButton-clicked{\n"
"	image: url(:/button/img/highlight_message.svg);\n"
"}"));

        verticalLayout->addWidget(messagePushButton);

        listPushButton = new QPushButton(layoutWidget);
        listPushButton->setObjectName("listPushButton");
        listPushButton->setMinimumSize(QSize(57, 54));
        listPushButton->setMaximumSize(QSize(57, 54));

        verticalLayout->addWidget(listPushButton);

        channelPushButton = new QPushButton(layoutWidget);
        channelPushButton->setObjectName("channelPushButton");
        channelPushButton->setMinimumSize(QSize(57, 54));
        channelPushButton->setMaximumSize(QSize(57, 54));

        verticalLayout->addWidget(channelPushButton);

        spacePushButton = new QPushButton(layoutWidget);
        spacePushButton->setObjectName("spacePushButton");
        spacePushButton->setMinimumSize(QSize(57, 54));
        spacePushButton->setMaximumSize(QSize(57, 54));

        verticalLayout->addWidget(spacePushButton);

        verticalSpacer = new QSpacerItem(20, 249, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        setingPushButton = new QPushButton(layoutWidget);
        setingPushButton->setObjectName("setingPushButton");
        setingPushButton->setMinimumSize(QSize(57, 54));
        setingPushButton->setMaximumSize(QSize(57, 54));

        verticalLayout->addWidget(setingPushButton);

        filePushButton = new QPushButton(layoutWidget);
        filePushButton->setObjectName("filePushButton");
        filePushButton->setMinimumSize(QSize(57, 54));
        filePushButton->setMaximumSize(QSize(57, 54));

        verticalLayout->addWidget(filePushButton);

        mailPushhButton = new QPushButton(layoutWidget);
        mailPushhButton->setObjectName("mailPushhButton");
        mailPushhButton->setMinimumSize(QSize(57, 54));
        mailPushhButton->setMaximumSize(QSize(57, 54));

        verticalLayout->addWidget(mailPushhButton);

        collectPushButton = new QPushButton(layoutWidget);
        collectPushButton->setObjectName("collectPushButton");
        collectPushButton->setMinimumSize(QSize(57, 54));
        collectPushButton->setMaximumSize(QSize(57, 54));

        verticalLayout->addWidget(collectPushButton);


        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QWidget *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "Form", nullptr));
        image->setText(QString());
        messagePushButton->setText(QString());
        listPushButton->setText(QString());
        channelPushButton->setText(QString());
        spacePushButton->setText(QString());
        setingPushButton->setText(QString());
        filePushButton->setText(QString());
        mailPushhButton->setText(QString());
        collectPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
