#include "mainwindow.h"
#include "loginwindow.h"
#include "studentwindow.h"
#include "connection.h"
#include <QApplication>
#include <QDialog>
#include <QProcess>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlRecord>
#include <QApplication>
#include <QVariant>
#include <QDebug>
#include <QSqlError>
#include <QtSql>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;

    //连接数据库
    if (!createConnection())
        return 1;

    //创建登录窗口
    loginWindow window1;

    //登录成功则进入对应的界面
    if(window1.exec() == QDialog::Accepted)
    {
        StudentWindow *stWindow = new StudentWindow;
        stWindow->setStudent(window1.st);
        stWindow->show();
        stWindow->setAttribute(Qt::WA_DeleteOnClose);
    }


//    w.show();
    return a.exec();
}
