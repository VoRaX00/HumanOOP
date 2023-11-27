#include "Human.h"

void Human::setName(const string &_name)
{
    name = _name;
}

void Human::setSurname(const string &_surname)
{
    surname = _surname;
}

void Human::setPatronymic(const string &_patronymic)
{
    patronymic = _patronymic;
}

void Human::setAge(const unsigned short &_age)
{
    age = _age;
}

void Human::setWeight(const unsigned short &_weight)
{
    weight = _weight;
}

void Human::setHeight(const unsigned short &_height)
{
    height = _height;
}

string Human::getName() const
{
    return name;
}

string Human::getSurname() const
{
    return surname;
}

string Human::getPatronymic() const
{
    return patronymic;
}

unsigned short Human::getAge() const
{
    return age;
}

unsigned short Human::getWeight() const
{
    return weight;
}

unsigned short Human::getHeight() const
{
    return height;
}

void Human::getStatus()
{
    cout << "Human\n";
}

void Human::print()
{
    cout <<"Surname: "<<surname <<" Name: "<< name << " Patronymic: " << patronymic << "\n" <<
        "Age: " << age << " Weight: " << weight << " Height: " << height << endl;
}
