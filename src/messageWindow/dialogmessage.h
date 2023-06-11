#ifndef DIALOGMESSAGE_H
#define DIALOGMESSAGE_H

#include <QWidget>

namespace Ui {
class DialogMessage;
}

class DialogMessage : public QWidget
{
    Q_OBJECT

public:
    explicit DialogMessage(QWidget *parent = nullptr);
    ~DialogMessage();

private:
    Ui::DialogMessage *ui;
};

#endif // DIALOGMESSAGE_H
