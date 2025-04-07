#include "addteachers.h"
#include "ui_addteachers.h"

AddTeachers::AddTeachers(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddTeachers)
{
    ui->setupUi(this);
}

AddTeachers::~AddTeachers()
{
    delete ui;
}
