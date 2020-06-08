#ifndef STUDENTWINDOW_H
#define STUDENTWINDOW_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include "student.h"

namespace Ui {
class StudentWindow;
}

class StudentWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StudentWindow(QWidget *parent = nullptr);
    ~StudentWindow();
    void showClassSchedule();
    void updateSchedule(int week);
    QSqlQueryModel *mode = new QSqlQueryModel(this);
    void turnToClassSchedule();
    void changeClassSchedule();
    void setStudent(Student st);

private:
    Ui::StudentWindow *ui;
    Student st;
};

#endif // STUDENTWINDOW_H
