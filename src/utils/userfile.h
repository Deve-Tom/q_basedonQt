
#ifndef USERFILE_H
#define USERFILE_H


#include <QObject>
#include <QWidget>
#include <QString>
#include <QFile>
#include <QDir>

class UserFile : public QObject
{
    Q_OBJECT

public:
    enum class Choice{
        UserFilePath,
        UserInforFilePath,
        UserHistoryFilePath,
        SystemLogPath
    };

public:
    explicit UserFile(const QString& path,QObject *parent = nullptr);

    QString readFileToQString(const QString& fileName,Choice FileDirChoice);
    bool writeFile(const QString& data,const QString&fileName,Choice FileDirChoice);

private:
    QString userFilePath;
    QString userInfoFilePath;
    QString userHistoryFilePath;
    QString systemLogPath;

signals:

};

#endif // USERFILE_H
