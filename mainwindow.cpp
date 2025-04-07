#include "mainwindow.h"
#include <QMessageBox>
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<< QSqlDatabase::drivers();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("sys");//replace with the databse file name
    db.setUserName("root");
    db.setPassword("569874");//replace with password of db


    db.open();

    if (db.open())
    {
        QMessageBox::information(this, "Connection", "Connected to the database successfully.");
    }
    else
    {
        QMessageBox::critical(this, "Connection", "Failed to connect to the database: " );

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
