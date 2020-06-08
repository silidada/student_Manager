#ifndef STUDENT_H
#define STUDENT_H
#include <QString>

class Student
{
private:
    QString id;
    QString name;
    int class_name;
    QString qqNumber;
    QString weChat;
    QString eMail;
    int age;
    QString telphoneNum;
public:
    Student();
    void init(QString id, QString name, int class_name, QString qqNumber="null", QString weChat="null", QString eMail="null", int age=-1, QString telphoneNum="null");
    QString getName();
    int getClass();
};

#endif // STUDENT_H
