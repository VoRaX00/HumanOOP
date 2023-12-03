#include "Student.h"

Student::Student(string _surname, string _name, string _patronymic, 
u_int16_t _age, u_int16_t _weight, 
u_int16_t _height, string _institut, double rau)
{
    surname = _surname;
    name = _name;
    patronymic = _patronymic;
    age = _age;
    weight = _weight;
    height = _height;
    RAU = rau;
    institut = _institut;
}

void Student::getStatus()
{
    cout << "Students\n";
}

void Student::print()
{
    cout <<"Surname: "<<surname <<" Name: "<< name << " Patronymic: " << patronymic << endl <<
        "Age: " << age << " Weight: " << weight << " Height: " << height << endl << 
        "Institut: "<< institut<< " " << "RAU: "<<RAU << endl;
}

double Student::getRAU() const
{
    return RAU;
}

void Student::setRAU(const double &rau)
{
    RAU = rau;
}

string Student::getInstitut() const
{
    return institut;
}

void Student::setInstititut(const string& _institut)
{
    institut = _institut;
}
