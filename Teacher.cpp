#include "Teacher.h"

Teacher::Teacher(string _surname, string _name, string _patronymic, u_int16_t _age, u_int16_t _weight, u_int16_t _height, string _nameSubject)
{
    surname = _surname;
    name = _name;
    patronymic = _patronymic;
    age = _age;
    weight = _weight;
    height = _height;
    nameSubject = _nameSubject;
}

string Teacher::getSubject() const
{
    return nameSubject;
}

void Teacher::setSubject(string _nameSubject)
{
    nameSubject = _nameSubject;
}

void Teacher::print()
{
    cout <<"Surname: "<<surname <<" Name: "<< name << " Patronymic: " << patronymic << "\n" <<
        "Age: " << age << " Weight: " << weight << " Height: " << height << endl
        << "Предмет: " << nameSubject << endl;
}
