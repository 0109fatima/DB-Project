#ifndef ADDTEACHERS_H
#define ADDTEACHERS_H

#include <QMainWindow>

namespace Ui {
class AddTeachers;
}

class AddTeachers : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddTeachers(QWidget *parent = nullptr);
    ~AddTeachers();

private:
    Ui::AddTeachers *ui;
};

#endif // ADDTEACHERS_H
