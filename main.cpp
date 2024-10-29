#include <QApplication>
#include <QQmlApplicationEngine>
#include "datagenerator.h"
#include "dataprocessor.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<DataGenerator>("datagenerator",1,0,"DataGenerator");
    qmlRegisterType<DataProcessor>("dataprocessor",1,0,"DataProcessor");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
