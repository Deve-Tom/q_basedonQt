
#include "userfile.h"

UserFile::UserFile(const QString& _userFile,QObject *parent)
    : QObject{parent},userFilePath{QDir::currentPath()+"/"+_userFile+"/"}{
    QDir dirPath =  QDir::currentPath();

    // 如果对应用户目录不存在则创建对应用户目录
    if(!dirPath.exists(_userFile)){
        dirPath.mkdir(_userFile);
    }

    dirPath.cd(_userFile);

    // 如果用户基本信息目录不存在则创建用户基本信息目录
    this->userInfoFilePath = this->userFilePath+QString("imfo/");
    if(!dirPath.exists("imfo")){
        dirPath.mkdir("imfo");
    }

    // 如果用户聊天记录目录不存在则创建用户聊天记录目录
    this->userHistoryFilePath = this->userFilePath+QString("history/");
    if(!dirPath.exists("history")){
        dirPath.mkdir("history");
    }

    // 如果用户操作日志目录不存在则创建用户操作日志目录
    this->systemLogPath = this->userFilePath+QString("data/");
    if(!dirPath.exists("data")){
        dirPath.mkdir("data");
    }
}

// 按指定要求读取对应目录的文件
QString UserFile::readFileToQString(const QString &fileName, Choice FileDirChoice){
    switch(FileDirChoice){
    // 读取用户根目录下的对应文件
    case Choice::UserFilePath:{
        QString path = this->userFilePath+fileName;
        QFile file(path);

        // 如果读取文件失败则返回为空
        if(!file.open(QIODevice::ReadOnly)){
            return {};
        }

        // 按行读取文件数据
        QByteArray data;
        while(!file.atEnd()){
            data+=file.readLine();
        }

        file.close();

        return data.toBase64();
    }
    // 读取用户信息目录下的文件
    case Choice::UserInforFilePath:{
        QString path = this->userInfoFilePath+fileName;
        QFile file(path);

        // 如果读取文件失败则返回为空
        if(!file.open(QIODevice::ReadOnly)){
            return {};
        }

        // 按行读取文件数据
        QByteArray data;
        while(!file.atEnd()){
            data+=file.readLine();
        }

        file.close();

        return data.toBase64();
    }
    // 读取用户历史数据目录下的问价
    case Choice::UserHistoryFilePath:{
        QString path = this->userHistoryFilePath+fileName;
        QFile file(path);

        // 如果读取文件失败则返回为空
        if(!file.open(QIODevice::ReadOnly)){
            return {};
        }

        // 按行读取文件数据
        QByteArray data;
        while(!file.atEnd()){
            data+=file.readLine();
        }

        file.close();

        return data.toBase64();
    }
    // 读取日志文件夹下的文件
    case Choice::SystemLogPath:
        QString path = this->systemLogPath+fileName;
        QFile file(path);

        // 如果读取文件失败则返回为空
        if(!file.open(QIODevice::ReadOnly)){
            return {};
        }

        // 按行读取文件数据
        QByteArray data;
        while(!file.atEnd()){
            data+=file.readLine();
        }

        file.close();

        return data.toBase64();
    }

    return {};
}

bool UserFile::writeFile(const QString &data, const QString &fileName, Choice FileDirChoice){
    switch(FileDirChoice){
    // 在用户根目录下的写对应文件
    case Choice::UserFilePath:{
        QString path = this->userFilePath+fileName;
        QFile file(path);

        // 如果打开文件失败则返回为失败
        if(!file.open(QIODevice::ReadWrite)){
            return false;
        }

        // 写入数据
        file.write(data.toUtf8());

        file.close();

        break;
    }
    // 在用户信息目录下的写文件
    case Choice::UserInforFilePath:{
        QString path = this->userInfoFilePath+fileName;
        QFile file(path);

        // 如果打开文件失败则返回为失败
        if(!file.open(QIODevice::ReadWrite)){
            return false;
        }

        // 写入数据
        file.write(data.toUtf8());

        file.close();

        break;
    }
    // 在用户历史数据目录下的写文件
    case Choice::UserHistoryFilePath:{
        QString path = this->userHistoryFilePath+fileName;
        QFile file(path);

        // 如果打开文件失败则返回为失败
        if(!file.open(QIODevice::ReadWrite)){
            return false;
        }

        // 写入数据
        file.write(data.toUtf8());

        file.close();

        break;
    }
    // 在日志文件夹下的写文件
    case Choice::SystemLogPath:
        QString path = this->systemLogPath+fileName;
        QFile file(path);

        // 如果打开文件失败则返回为失败
        if(!file.open(QIODevice::ReadWrite)){
            return false;
        }

        // 写入数据
        file.write(data.toUtf8());

        file.close();

        break;
    }

    return true;
}

