#include "studentwindow.h"
#include "ui_studentwindow.h"
#include <QPushButton>
#include <QCommandLinkButton>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QAbstractItemModel>
#include <QVariant>
#include <QComboBox>

StudentWindow::StudentWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StudentWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("学生信息管理系统");
    ui->stackedWidget->setCurrentIndex(0);

    //点击查询课表
    connect(ui->btn_class_schedule, &QPushButton::clicked, this, &StudentWindow::turnToClassSchedule);
    //点击查询成绩切换到第二页
    connect(ui->btn_score, &QPushButton::clicked, [=](){ui->stackedWidget->setCurrentIndex(2);});
    //点击个人信息切换到第三页
    connect(ui->btn_sel_imformation, &QPushButton::clicked, [=](){ui->stackedWidget->setCurrentIndex(3);});
    //点击班级情况切换到第四页
    connect(ui->btn_class_consition, &QPushButton::clicked, [=](){ui->stackedWidget->setCurrentIndex(4);});
    //点击考试安排切换到第五页
    connect(ui->btn_test_schedule, &QPushButton::clicked, [=](){ui->stackedWidget->setCurrentIndex(5);});
    //点击宿舍情况切换到第六页
    connect(ui->btn_dormitory, &QPushButton::clicked, [=](){ui->stackedWidget->setCurrentIndex(6);});

    //设置返回按钮
    connect(ui->link_back, &QCommandLinkButton::clicked, [=](){ui->stackedWidget->setCurrentIndex(0);});
    connect(ui->link_back_2, &QCommandLinkButton::clicked, [=](){ui->stackedWidget->setCurrentIndex(0);});
    connect(ui->link_back_3, &QCommandLinkButton::clicked, [=](){ui->stackedWidget->setCurrentIndex(0);});
    connect(ui->link_back_4, &QCommandLinkButton::clicked, [=](){ui->stackedWidget->setCurrentIndex(0);});
    connect(ui->link_back_5, &QCommandLinkButton::clicked, [=](){ui->stackedWidget->setCurrentIndex(0);});
    connect(ui->link_back_6, &QCommandLinkButton::clicked, [=](){ui->stackedWidget->setCurrentIndex(0);});

    //设置课表显示
    connect(ui->comboBox_schedule, &QComboBox::currentTextChanged, this, &StudentWindow::changeClassSchedule);
}


void StudentWindow::setStudent(Student st)
{
    this->st = st;
}


void StudentWindow::updateSchedule(int week)
{
    QSqlQuery qry, q;

    //先清空课表显示表
    qry.exec("update courseShow set 'Monday'=null");
    qry.exec("update courseShow set 'Tuesday'=null");
    qry.exec("update courseShow set 'Wednesday'=null");
    qry.exec("update courseShow set 'Thursday'=null");
    qry.exec("update courseShow set 'Friday'=null");
    qry.exec("update courseShow set 'Saturday'=null");
    qry.exec("update courseShow set 'Sunday'=null");

    //查找week周的课
//    QString a = "select * from course where week=" + QString("%1").arg(week)+ ' and class=' + QString("%1").arg(this->st.getClass());
    qry.prepare("select * from course where week=? and class=?");
    qry.addBindValue(QString("%1").arg(week));
    qry.addBindValue(QString("%1").arg(this->st.getClass()));
    if(!qry.exec())
        qDebug() << qry.lastError();
    else
        qDebug() << "select succefully";

    //将找到的课逐个放进课表
    while (qry.next()) {
//        int id = qry.value(0).toInt();
        QString name = qry.value(1).toString();
        QString teacher = qry.value(2).toString();
//        int week = qry.value(3).toInt();
        int section = qry.value(4).toInt();
        QString address = qry.value(5).toString();
        QString weekday = qry.value(6).toString();
        QString sqlUpdate = "update courseShow set " + weekday + "='" + name + "\n(教室:" + address + "\n教师:" + teacher +")" + "' where section=" + QString("%1").arg(section);
        qDebug() << sqlUpdate;
        if(!q.exec(sqlUpdate))
            qDebug() << q.lastError();
        else
            qDebug() << "updata sucefully";
    }
}

//转去查询课表页面
void StudentWindow::turnToClassSchedule()
{
    ui->stackedWidget->setCurrentIndex(1);
    updateSchedule(1);
    showClassSchedule();
}


//显示课表
void StudentWindow::showClassSchedule()
{
    this->mode->setQuery("select * from courseShow");
    ui->table_class_schedule->setMouseTracking(true);
    ui->table_class_schedule->setModel(this->mode);
    ui->table_class_schedule->setRowHeight(0, 65);
    ui->table_class_schedule->setRowHeight(1, 65);
    ui->table_class_schedule->setRowHeight(2, 65);
    ui->table_class_schedule->setRowHeight(3, 65);
    ui->table_class_schedule->setRowHeight(4, 65);
    ui->table_class_schedule->setRowHeight(5, 65);
    ui->table_class_schedule->setRowHeight(6, 65);
    ui->table_class_schedule->setRowHeight(7, 65);
}

//按照combobox改变课表
void StudentWindow::changeClassSchedule()
{
    updateSchedule(ui->comboBox_schedule->currentIndex()+1);
    showClassSchedule();
}

StudentWindow::~StudentWindow()
{
    delete ui;
}
