#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include<QtSql/QtSql>
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>

int main(int argc, char *argv[])
{
    QSqlDatabase db = QSqlDatabase :: addDatabase("QMYSQL");


    QApplication a(argc, argv);
    db.setHostName("127.0.0.1");
    db.setUserName("raiyan");
    db.setPassword("1234");
    db.setDatabaseName("facebook");
    db.open();
    MainWindow w;
    w.show();

    return a.exec();
}
