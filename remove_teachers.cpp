#include "remove_teachers.h"
#include "ui_remove_teachers.h"

Remove_teachers::Remove_teachers(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Remove_teachers)
{
    ui->setupUi(this);
}

Remove_teachers::~Remove_teachers()
{
    delete ui;
}
