
#ifndef JSONTOOLS_H
#define JSONTOOLS_H


#include <QObject>
#include <QString>
#include <QJsonObject>
#include <QJsonDocument>


class JsonTools{
public:
    JsonTools()=default;
    static QString jsonToQString(const QJsonObject & data);
    static QJsonObject qStingToJson(const QString & data);
    static bool JWTCurrentTimeCompare(const int&exp,QDateTime time);
};

#endif // JSONTOOLS_H
