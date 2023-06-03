
#include "jsontools.h"
#include "qjsondocument.h"

// Json对象转QString
QString JsonTools::jsonToQString(const QJsonObject &data){
    if(data.isEmpty()){
        return{};
    }

    return QString(QJsonDocument(data).toJson());
}

// QString转Json对象
QJsonObject JsonTools::qStingToJson(const QString &data){
    if(data.isEmpty()){
        return {};
    }

    QJsonDocument jsonDocument = QJsonDocument::fromJson(data.toLocal8Bit().data());
    return jsonDocument.object();
}

// JWT认证时间比较
bool JsonTools::JWTCurrentTimeCompare(const int &exp, QDateTime time){
    QDateTime expDateTime = QDateTime::fromSecsSinceEpoch(exp);
    if(time<expDateTime){
        return true;
    }

    return false;
}
