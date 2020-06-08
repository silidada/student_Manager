#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>
#include <QButtonGroup>
#include <QSqlQuery>
#include <QSqlError>

loginWindow::loginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("登录窗口");
    //连接用户点击登录按钮
    connect(ui->btn_login, &QPushButton::clicked, this, &loginWindow::login);
    //连接用户点击退出按钮
    connect(ui->btn_exit, &QPushButton::clicked, [=](){
        this->close();
    });
}

loginWindow::~loginWindow()
{
    delete ui;
}

void loginWindow::login()
{
    qDebug() << "you have clicked the login button";
    qDebug() << "账户:" << ui->text_accout->text();
    qDebug() << "密码:" << ui->text_password->text();
    //获取text框的输入
    QString accout = ui->text_accout->text();
    QString pw = ui->text_password->text();
    //将教师和学生两个radio合成一组
    QButtonGroup *radio = new QButtonGroup(this);
    radio->addButton(ui->radio_student, 0);
    radio->addButton(ui->radio_teacher, 1);

    if(!this->inputIsLegal(pw, radio->checkedId()))
    {
        ui->text_password->clear();
        return;
    }
    if(this->passwordValidation(accout, pw, radio->checkedId()))
    {
        this->accept();
    }
    else
    {
        qDebug() << "密码错误";
        //弹出对话框提示密码或账号错误
        QMessageBox::critical(this, "错误", "账号或密码错误");

        //清除密码
        ui->text_password->clear();
    }
}


//判断输入的密码是否能与数据库中的密码相匹配, 能返回true, 否则返回false
bool loginWindow::passwordValidation(QString accout, QString pw, int identity)
{
    QString findStudentAccout = "select * from studentAccount where id=?";
    QString findTeacherAccout = "select * from teacherAccount where id=?";
    QSqlQuery query;
    QString pwd;

    //学生账号
    if(identity == 0)
    {
        query.prepare(findStudentAccout);

    }
    else if(identity == 1)  //教师账号
    {
        query.prepare(findTeacherAccout);
    }

    //将问号变成account
    query.addBindValue(accout);
    if(!query.exec())
    {
        qDebug() << query.lastError();
    }
    else
        qDebug() << "find accout succefully";

    if(query.first())
    {
        pwd = query.value(1).toString();
        qDebug() << pwd;

        int class_name = query.value(2).toInt();
        QString qqNumber = query.value(3).toString();
        QString weChat = query.value(4).toString();
        QString eMail = query.value(5).toString();
        int age = query.value(6).toInt();
        QString telphoneNum = query.value(7).toString();
        QString name = query.value(8).toString();

        this->st.init(accout, name, class_name, qqNumber, weChat, eMail, age, telphoneNum);
    }
    else
    {
        qDebug() << "account not exist";
        return false;
    }


    if(pw == pwd)
        return true;
    else
        return false;
}


bool loginWindow::inputIsLegal(QString pw, int identity)
{
    int passwordLen = pw.length();
    if(passwordLen < 6)
    {
        QMessageBox::critical(this, "错误", "密码过短");
        return false;
    }
    else if(identity == -1)
    {
        QMessageBox::critical(this, "错误", "请选择身份");
        return false;
    }
    return true;
}
