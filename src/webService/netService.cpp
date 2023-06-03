//
// Created by 23148 on 2023/5/19.
//

#include "./netService.h"

netService::netService(QString _url,QObject *parent):url(std::move(_url)) {
    manager = new QNetworkAccessManager();
}

netService::~netService() {
    delete manager;
}

QJsonObject netService::sendRequestPost( QJsonObject &data,QString router) {
    QJsonObject result;
    QNetworkRequest request;
    QUrl _url(this->url+router);

    request.setUrl(_url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/json");

    // 发送请求
    QNetworkReply *reply = manager->post(request,QJsonDocument(data).toJson());

    // 请求完成后，读取返回的json数据
    QObject::connect(reply,&QNetworkReply::finished,[&](){
        QByteArray bytes = reply->readAll();
        QJsonDocument doc = QJsonDocument::fromJson(bytes);
        result = doc.object();

        reply->deleteLater();
    });

    // 等待请求完成
    QEventLoop loop;
    QObject::connect(reply,&QNetworkReply::finished,&loop,&QEventLoop::quit);
    loop.exec();

    return result;
}
