#include "student.h"
#include <QString>

Student::Student()
{

}

void Student::init(QString id, QString name, int class_name, QString qqNumber, QString weChat, QString eMail, int age, QString telphoneNum)
{
    this->id = id;
    this->name = name;
    this->class_name = class_name;
    this->qqNumber = qqNumber;
    this->weChat = weChat;
    this->eMail = eMail;
    this->age = age;
    this->telphoneNum = telphoneNum;
}

QString Student::getName()
{
    return this->name;
}

int Student::getClass()
{
    return this->class_name;
}
