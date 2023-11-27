#include "Student.h"

Student::Student(string _surname, string _name, string _patronymic, 
unsigned short _age, unsigned short _weight, 
unsigned short _height, double rau)
{
    surname = _surname;
    name = _name;
    patronymic = _patronymic;
    age = _age;
    weight = _weight;
    height = _height;
    RAU = rau;
}

void Student::getStatus()
{
    cout << "Students\n";
}

void Student::print()
{
    cout <<"Surname: "<<surname <<" Name: "<< name << " Patronymic: " << patronymic << endl <<
        "Age: " << age << " Weight: " << weight << " Height: " << height << endl <<
        "RAU: "<<RAU << endl;
}

unsigned short Student::getRAU() const
{
    return RAU;
}

void Student::setRAU(const double &rau)
{
    RAU = rau;
}
