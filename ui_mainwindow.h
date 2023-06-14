/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QWidget *centralwidget;
    QWidget *backwidget;
    QStackedWidget *changeWidget;
    QWidget *messagePage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *searchback;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QListWidget *messageList;
    QPushButton *minPushButton;
    QPushButton *closePushButton;
    QWidget *messagePageWidget;
    QWidget *FriendListPage;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *searchbackOnFriendList;
    QLineEdit *searchLineEditOnFriendList;
    QPushButton *searchButtonOnFriendList;
    QListWidget *friendListWidget;
    QWidget *friendListShow;
    QPushButton *closePushButton2;
    QPushButton *minPushButton2;
    QWidget *SiderBar;
    QGridLayout *gridLayout;
    QToolButton *ListButton;
    QToolButton *ConnectButton;
    QToolButton *FileButton;
    QToolButton *ChannelButton;
    QToolButton *MenuButton;
    QToolButton *MessageButton;
    QSpacerItem *verticalSpacer;
    QToolButton *MailButton;
    QToolButton *RoomButton;
    QLabel *userImage;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName("mainWindow");
        mainWindow->resize(1047, 711);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainWindow->sizePolicy().hasHeightForWidth());
        mainWindow->setSizePolicy(sizePolicy);
        mainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        backwidget = new QWidget(centralwidget);
        backwidget->setObjectName("backwidget");
        backwidget->setGeometry(QRect(10, 10, 1011, 641));
        backwidget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-top-right-radius:15px;\n"
"	border-top-left-radius:15px;\n"
"	border-bottom-left-radius:15px;\n"
"	border-bottom-right-radius:15px;\n"
"}"));
        changeWidget = new QStackedWidget(backwidget);
        changeWidget->setObjectName("changeWidget");
        changeWidget->setGeometry(QRect(60, 1, 951, 631));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(changeWidget->sizePolicy().hasHeightForWidth());
        changeWidget->setSizePolicy(sizePolicy1);
        changeWidget->setStyleSheet(QString::fromUtf8("QStackedWidget#changeWidget{\n"
"	background-color: rgb(242, 242, 242);\n"
"	border-top-right-radius:15px;\n"
"	border-bottom-right-radius:15px;\n"
"}"));
        changeWidget->setFrameShadow(QFrame::Plain);
        messagePage = new QWidget();
        messagePage->setObjectName("messagePage");
        sizePolicy.setHeightForWidth(messagePage->sizePolicy().hasHeightForWidth());
        messagePage->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(messagePage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, -4, 301, 681));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        searchback = new QWidget(layoutWidget);
        searchback->setObjectName("searchback");
        searchback->setMinimumSize(QSize(280, 82));
        searchback->setMaximumSize(QSize(310, 82));
        searchback->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        searchLineEdit = new QLineEdit(searchback);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(30, 20, 211, 41));
        searchLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#searchLineEdit{\n"
"	border-radius:5px;\n"
"	border-with:0;\n"
"	font: 400 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color: rgb(242, 242, 242);\n"
"}"));
        searchButton = new QPushButton(searchback);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(250, 20, 39, 39));
        searchButton->setMinimumSize(QSize(39, 39));
        searchButton->setMaximumSize(QSize(39, 39));
        searchButton->setStyleSheet(QString::fromUtf8("QPushButton#searchButton{\n"
"	border-radius:5px;\n"
"	border-with:0;\n"
"	font: 400 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color: rgb(242, 242, 242);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mainMenu/img/add_imge.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);
        searchButton->setIconSize(QSize(15, 15));

        verticalLayout->addWidget(searchback);

        messageList = new QListWidget(layoutWidget);
        messageList->setObjectName("messageList");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(messageList->sizePolicy().hasHeightForWidth());
        messageList->setSizePolicy(sizePolicy2);
        messageList->setMinimumSize(QSize(280, 580));
        messageList->setMaximumSize(QSize(310, 600));
        messageList->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	border: none;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));

        verticalLayout->addWidget(messageList);

        minPushButton = new QPushButton(messagePage);
        minPushButton->setObjectName("minPushButton");
        minPushButton->setGeometry(QRect(885, 0, 32, 32));
        minPushButton->setMinimumSize(QSize(32, 32));
        minPushButton->setMaximumSize(QSize(32, 32));
        minPushButton->setStyleSheet(QString::fromUtf8("QPushButton#minPushButton{\n"
"	border: one;\n"
"	image: url(:/button/img/minimize.png);\n"
"}\n"
"\n"
"QPushButton#minPushButton:hover{\n"
"	border: one;\n"
"	background-color: rgb(233, 233, 233);\n"
"}"));
        closePushButton = new QPushButton(messagePage);
        closePushButton->setObjectName("closePushButton");
        closePushButton->setGeometry(QRect(919, 0, 32, 32));
        closePushButton->setMinimumSize(QSize(32, 32));
        closePushButton->setMaximumSize(QSize(32, 32));
        closePushButton->setStyleSheet(QString::fromUtf8("QPushButton#closePushButton{\n"
"	border: one;\n"
"	image: url(:/button/img/close-button-normal.png);\n"
"	border-top-right-radius:15px;\n"
"}\n"
"\n"
"QPushButton#closePushButton:hover{\n"
"	background-color: rgb(196, 43, 28);\n"
"}\n"
"\n"
"QPushButton#closePushButton:pressed{\n"
"	background-color: rgb(196, 43, 28);\n"
"}\n"
""));
        messagePageWidget = new QWidget(messagePage);
        messagePageWidget->setObjectName("messagePageWidget");
        messagePageWidget->setGeometry(QRect(300, 100, 641, 531));
        messagePageWidget->setMinimumSize(QSize(0, 0));
        messagePageWidget->setMaximumSize(QSize(700, 844));
        changeWidget->addWidget(messagePage);
        FriendListPage = new QWidget();
        FriendListPage->setObjectName("FriendListPage");
        layoutWidget_2 = new QWidget(FriendListPage);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(0, 0, 301, 664));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        searchbackOnFriendList = new QWidget(layoutWidget_2);
        searchbackOnFriendList->setObjectName("searchbackOnFriendList");
        searchbackOnFriendList->setMinimumSize(QSize(280, 82));
        searchbackOnFriendList->setMaximumSize(QSize(310, 82));
        searchbackOnFriendList->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        searchLineEditOnFriendList = new QLineEdit(searchbackOnFriendList);
        searchLineEditOnFriendList->setObjectName("searchLineEditOnFriendList");
        searchLineEditOnFriendList->setGeometry(QRect(30, 20, 211, 41));
        searchLineEditOnFriendList->setStyleSheet(QString::fromUtf8("QLineEdit#searchLineEditOnFriendList{\n"
"	border-radius:5px;\n"
"	border-with:0;\n"
"	font: 400 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color: rgb(242, 242, 242);\n"
"}"));
        searchButtonOnFriendList = new QPushButton(searchbackOnFriendList);
        searchButtonOnFriendList->setObjectName("searchButtonOnFriendList");
        searchButtonOnFriendList->setGeometry(QRect(250, 20, 39, 39));
        searchButtonOnFriendList->setMinimumSize(QSize(39, 39));
        searchButtonOnFriendList->setMaximumSize(QSize(39, 39));
        searchButtonOnFriendList->setStyleSheet(QString::fromUtf8("QPushButton#searchButtonOnFriendList{\n"
"	border-radius:5px;\n"
"	border-with:0;\n"
"	font: 400 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color: rgb(242, 242, 242);\n"
"}"));
        searchButtonOnFriendList->setIcon(icon);
        searchButtonOnFriendList->setIconSize(QSize(15, 15));

        verticalLayout_2->addWidget(searchbackOnFriendList);

        friendListWidget = new QListWidget(layoutWidget_2);
        friendListWidget->setObjectName("friendListWidget");
        sizePolicy2.setHeightForWidth(friendListWidget->sizePolicy().hasHeightForWidth());
        friendListWidget->setSizePolicy(sizePolicy2);
        friendListWidget->setMinimumSize(QSize(280, 580));
        friendListWidget->setMaximumSize(QSize(310, 600));
        friendListWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	border: none;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));

        verticalLayout_2->addWidget(friendListWidget);

        friendListShow = new QWidget(FriendListPage);
        friendListShow->setObjectName("friendListShow");
        friendListShow->setGeometry(QRect(300, 80, 661, 551));
        closePushButton2 = new QPushButton(FriendListPage);
        closePushButton2->setObjectName("closePushButton2");
        closePushButton2->setGeometry(QRect(919, 0, 32, 32));
        closePushButton2->setMinimumSize(QSize(32, 32));
        closePushButton2->setMaximumSize(QSize(32, 32));
        closePushButton2->setStyleSheet(QString::fromUtf8("QPushButton#closePushButton2{\n"
"	border: one;\n"
"	image: url(:/button/img/close-button-normal.png);\n"
"	border-top-right-radius:15px;\n"
"}\n"
"\n"
"QPushButton#closePushButton2:hover{\n"
"	background-color: rgb(196, 43, 28);\n"
"}\n"
"\n"
"QPushButton#closePushButton:pressed{\n"
"	background-color: rgb(196, 43, 28);\n"
"}\n"
""));
        minPushButton2 = new QPushButton(FriendListPage);
        minPushButton2->setObjectName("minPushButton2");
        minPushButton2->setGeometry(QRect(885, 0, 32, 32));
        minPushButton2->setMinimumSize(QSize(32, 32));
        minPushButton2->setMaximumSize(QSize(32, 32));
        minPushButton2->setStyleSheet(QString::fromUtf8("QPushButton#minPushButton2{\n"
"	border: one;\n"
"	image: url(:/button/img/minimize.png);\n"
"}\n"
"\n"
"QPushButton#minPushButton2:hover{\n"
"	border: one;\n"
"	background-color: rgb(233, 233, 233);\n"
"}"));
        changeWidget->addWidget(FriendListPage);
        SiderBar = new QWidget(backwidget);
        SiderBar->setObjectName("SiderBar");
        SiderBar->setGeometry(QRect(1, 1, 61, 631));
        sizePolicy.setHeightForWidth(SiderBar->sizePolicy().hasHeightForWidth());
        SiderBar->setSizePolicy(sizePolicy);
        SiderBar->setStyleSheet(QString::fromUtf8("QWidget#SiderBar{\n"
"	background-color: rgb(242, 242, 242);\n"
"	border-top-left-radius:15px;\n"
"	border-bottom-left-radius:15px;\n"
"}"));
        gridLayout = new QGridLayout(SiderBar);
        gridLayout->setObjectName("gridLayout");
        ListButton = new QToolButton(SiderBar);
        ListButton->setObjectName("ListButton");
        ListButton->setMinimumSize(QSize(42, 42));
        ListButton->setMaximumSize(QSize(42, 42));
        ListButton->setStyleSheet(QString::fromUtf8("QToolButton#ListButton{\n"
"	border: none;\n"
"	image: url(:/mainMenu/img/friendListU.png);\n"
"	border-radius: 10px\n"
"}\n"
"\n"
"QToolButton#ListButton:checked{\n"
"	image: url(:/mainMenu/img/FriendListO.png);\n"
"	background-color: rgb(233, 233, 233);\n"
"	border-radius: 10px\n"
"}\n"
"\n"
"QToolButton#ListButton:hover{\n"
"	background-color: rgb(233, 233, 233);\n"
"	border-radius: 10px\n"
"}"));
        ListButton->setCheckable(true);
        ListButton->setAutoExclusive(true);

        gridLayout->addWidget(ListButton, 2, 0, 1, 1);

        ConnectButton = new QToolButton(SiderBar);
        ConnectButton->setObjectName("ConnectButton");
        ConnectButton->setMinimumSize(QSize(42, 42));
        ConnectButton->setMaximumSize(QSize(42, 42));
        ConnectButton->setStyleSheet(QString::fromUtf8("QToolButton#ConnectButton{\n"
"	border: none;\n"
"	image: url(:/mainMenu/img/collect.png);\n"
"	border-radius: 10px\n"
"}\n"
"\n"
"QToolButton#ConnectButton:hover{\n"
"	image: url(:/mainMenu/img/collectO.png);\n"
"	border-radius: 10px\n"
"}"));

        gridLayout->addWidget(ConnectButton, 8, 0, 1, 1);

        FileButton = new QToolButton(SiderBar);
        FileButton->setObjectName("FileButton");
        FileButton->setMinimumSize(QSize(42, 42));
        FileButton->setMaximumSize(QSize(42, 42));
        FileButton->setStyleSheet(QString::fromUtf8("QToolButton#FileButton{\n"
"	border: none;\n"
"	image: url(:/mainMenu/img/file.png);\n"
"	border-radius: 10px\n"
"}\n"
"\n"
"QToolButton#FileButton:hover{\n"
"	image: url(:/mainMenu/img/fileO.png);\n"
"	border-radius: 10px\n"
"}"));

        gridLayout->addWidget(FileButton, 7, 0, 1, 1);

        ChannelButton = new QToolButton(SiderBar);
        ChannelButton->setObjectName("ChannelButton");
        ChannelButton->setMinimumSize(QSize(42, 42));
        ChannelButton->setMaximumSize(QSize(42, 42));
        ChannelButton->setStyleSheet(QString::fromUtf8("QToolButton#ChannelButton{\n"
"	border: none;\n"
"	image: url(:/mainMenu/img/channel.png);\n"
"	border-radius: 10px\n"
"}\n"
"\n"
"QToolButton#ChannelButton:hover{\n"
"	background-color: rgb(233, 233, 233);\n"
"	border-radius: 10px\n"
"}"));
        ChannelButton->setCheckable(true);
        ChannelButton->setAutoExclusive(true);

        gridLayout->addWidget(ChannelButton, 3, 0, 1, 1);

        MenuButton = new QToolButton(SiderBar);
        MenuButton->setObjectName("MenuButton");
        MenuButton->setMinimumSize(QSize(42, 42));
        MenuButton->setMaximumSize(QSize(42, 42));
        MenuButton->setStyleSheet(QString::fromUtf8("QToolButton#MenuButton{\n"
"	border: none;\n"
"	image: url(:/mainMenu/img/normal_list_icon.f447ca40b46870868357.svg);\n"
"	border-radius: 10px\n"
"}\n"
"\n"
"QToolButton#MenuButton:hover{\n"
"	image: url(:/mainMenu/img/normal_list_active_icon.a3c44178dd097a6f1cda.svg);\n"
"	border-radius: 10px\n"
"}"));

        gridLayout->addWidget(MenuButton, 9, 0, 1, 1);

        MessageButton = new QToolButton(SiderBar);
        MessageButton->setObjectName("MessageButton");
        MessageButton->setMinimumSize(QSize(42, 42));
        MessageButton->setMaximumSize(QSize(42, 42));
        MessageButton->setStyleSheet(QString::fromUtf8("QToolButton#MessageButton{\n"
"	border: none;\n"
"	image: url(:/button/img/normal_message.png);\n"
"	border-radius: 10px\n"
"}\n"
"\n"
"QToolButton#MessageButton:checked{\n"
"	image: url(:/button/img/highlight_message.svg);\n"
"	background-color: rgb(233, 233, 233);\n"
"	border-radius: 10px\n"
"}\n"
"\n"
"QToolButton#MessageButton:hover{\n"
"	background-color: rgb(233, 233, 233);\n"
"	border-radius: 10px\n"
"}"));
        MessageButton->setCheckable(true);
        MessageButton->setAutoExclusive(true);

        gridLayout->addWidget(MessageButton, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        MailButton = new QToolButton(SiderBar);
        MailButton->setObjectName("MailButton");
        MailButton->setMinimumSize(QSize(42, 42));
        MailButton->setMaximumSize(QSize(42, 42));
        MailButton->setStyleSheet(QString::fromUtf8("QToolButton#MailButton{\n"
"	border: none;\n"
"	image: url(:/mainMenu/img/mail.png);\n"
"	border-radius: 10px\n"
"}\n"
"\n"
"QToolButton#MailButton:hover{\n"
"	image: url(:/mainMenu/img/emailO.png);\n"
"	border-radius: 10px\n"
"}"));

        gridLayout->addWidget(MailButton, 6, 0, 1, 1);

        RoomButton = new QToolButton(SiderBar);
        RoomButton->setObjectName("RoomButton");
        RoomButton->setMinimumSize(QSize(42, 42));
        RoomButton->setMaximumSize(QSize(42, 42));
        RoomButton->setStyleSheet(QString::fromUtf8("QToolButton#RoomButton{\n"
"	border: none;\n"
"	image: url(:/mainMenu/img/space.png);\n"
"	border-radius: 10px\n"
"}\n"
"\n"
"QToolButton#RoomButton:hover{\n"
"	background-color: rgb(233, 233, 233);\n"
"	border-radius: 10px\n"
"}"));
        RoomButton->setCheckable(true);
        RoomButton->setAutoExclusive(true);

        gridLayout->addWidget(RoomButton, 4, 0, 1, 1);

        userImage = new QLabel(SiderBar);
        userImage->setObjectName("userImage");
        userImage->setMinimumSize(QSize(42, 42));
        userImage->setMaximumSize(QSize(42, 42));

        gridLayout->addWidget(userImage, 0, 0, 1, 1);

        mainWindow->setCentralWidget(centralwidget);

        retranslateUi(mainWindow);

        changeWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "MainWindow", nullptr));
        searchButton->setText(QString());
        minPushButton->setText(QString());
        closePushButton->setText(QString());
        searchButtonOnFriendList->setText(QString());
        closePushButton2->setText(QString());
        minPushButton2->setText(QString());
        ListButton->setText(QString());
        ConnectButton->setText(QString());
        FileButton->setText(QString());
        ChannelButton->setText(QString());
        MenuButton->setText(QString());
        MessageButton->setText(QString());
        MailButton->setText(QString());
        RoomButton->setText(QString());
        userImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
