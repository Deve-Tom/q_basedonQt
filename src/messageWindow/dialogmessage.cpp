#include "dialogmessage.h"
#include "ui_dialogmessage.h"

DialogMessage::DialogMessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogMessage)
{
    ui->setupUi(this);
}

DialogMessage::~DialogMessage()
{
    delete ui;
}
