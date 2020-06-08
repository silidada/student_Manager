/*
*实现登录窗口的类
* 主要功能:
*   账户密码校对, 页面跳转
*/

#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <student.h>

namespace Ui {
class loginWindow;
}

class loginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit loginWindow(QWidget *parent = nullptr);
    ~loginWindow();

    //点击登录后的槽函数
    void login();

    //检查输入是否合法
    bool inputIsLegal(QString pw, int identity);

    //验证账号密码
    bool passwordValidation(QString accout, QString pw, int identity);

    Student st;

private:
    Ui::loginWindow *ui;
};

#endif // LOGINWINDOW_H
