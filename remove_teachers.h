#ifndef REMOVE_TEACHERS_H
#define REMOVE_TEACHERS_H

#include <QMainWindow>

namespace Ui {
class Remove_teachers;
}

class Remove_teachers : public QMainWindow
{
    Q_OBJECT

public:
    explicit Remove_teachers(QWidget *parent = nullptr);
    ~Remove_teachers();

private:
    Ui::Remove_teachers *ui;
};

#endif // REMOVE_TEACHERS_H
