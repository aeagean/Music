#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDir>
#include <iostream>
#include <QtQml>
#include "MusicPlayControl.h"
#include "FileBrowserService.h"
#include "FileBrowserListModel.h"

#include "MusicRepertory.h"
#include "MusicListService.h"

#include <QDebug>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<MusicPlayControl>("MusicPlayControl", 1, 0, "MusicPlayControl");
    qmlRegisterType<FileBrowserListModel>("FileBrowserListModel", 1, 0, "FileBrowserListModel");

    MusicRepertory::instance();
//    MusicListService::instance()->add(QStringList("/home/strong/Music"));

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/Qml/MainWin/main.qml")));

    return app.exec();
}
