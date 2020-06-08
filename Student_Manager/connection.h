#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlRecord>
#include <QApplication>
#include <QVariant>
#include <QDebug>
#include <QSqlError>
#include <QtSql>

static bool createConnection()
{
    //选择数据库引擎
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    //设置数据库名(没有此库则自动新建, 有则定位到这个库上)
    db.setDatabaseName(".//StudentManager.db");
    if(!db.open())
    {
        QMessageBox::critical(0, QObject::tr("无法打开数据库"), "无法创建数据库连接!", QMessageBox::Cancel);
        return false;
    }
    else
        qDebug() <<"connected";

    QSqlQuery qry;
    //创建表
    //创建学生账号信息表
    qry.prepare("create table if not exists studentAccount(id vachar(30) primary key,pwd vachar(30),class int, qqNumber vachar, weChat vachar, eMail vachar, age int, telphoneNum vachar, name vachar)" );
    if(!qry.exec())
        qDebug() << qry.lastError();
    else
        qDebug() << "student table created!";


    //创建教师信息账号信息表
    qry.prepare("create table if not exists teacherAccount(id vachar(30) primary key,pwd vachar(30),class int, qqNumber vachar, weChat vachar, eMail vachar, age int, telphoneNum vachar, name vachar)" );
    if(!qry.exec())
        qDebug() << qry.lastError();
    else
        qDebug() << "Teacher table created";

    //插入测试数据
    qry.prepare("insert into studentAccount(id, pwd, class) values('silidada', '010306', 1)");
    if(!qry.exec())
        qDebug() << qry.lastError();
    else
        qDebug() << "inserted test data";

    //创建课表存储表
    qry.prepare("create table if not exists course(id vachar primary key, name vachar, teacher vachar, week int, section int, address vachar, weekday vachar, class int)");
    if(!qry.exec())
        qDebug() << qry.lastError();
    else
        qDebug() << "course table created";

//    qry.exec("delete from course");
    //创建测试课表
    qry.prepare("insert into course(name, teacher, week, section, address, weekday, class) values('英语', 'haha', 1, 5, 'home','Wednesday', 1)");
    if(!qry.exec())
        qDebug() << qry.lastError();
    else
        qDebug() << "course table inserted";

    //创建表显示表
    qry.prepare("create table if not exists courseShow(section int primary key , Monday vachar, Tuesday vachar, Wednesday vachar, Thursday vachar,"
                "Friday vachar, Saturday vachar, Sunday vachar)");
    if(!qry.exec())
        qDebug() << qry.lastError();
    else
        qDebug() << "courseShow table created";

//    qry.exec("delete from courseShow where section=4");

    //创建空显示
    qry.prepare("insert into courseShow(section) values(1)");
    if(!qry.exec())
        qDebug() << qry.lastError();
    else
        qDebug() << "course table created";

    qry.exec("insert into courseShow(section) values(2)");
    qry.exec("insert into courseShow(section) values(3)");
    qry.exec("insert into courseShow(section) values(4)");
    qry.exec("insert into courseShow(section) values(5)");
    qry.exec("insert into courseShow(section) values(6)");
    qry.exec("insert into courseShow(section) values(7)");
    qry.exec("insert into courseShow(section) values(8)");

    return true;
}

#endif // CONNECTION_H
