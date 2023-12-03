#include "StudentProgin.h"

StudentProgin::StudentProgin()
{
}

StudentProgin::StudentProgin(string _surname, string _name, string _patronymic, u_int16_t _age, u_int16_t _weight, 
u_int16_t _height, string _institut, double rau)
{
    surname = _surname;
    name = _name;
    patronymic = _patronymic;
    age = _age;
    weight = _weight;
    height = _height;
    institut = _institut;
    RAU = rau;
}

void StudentProgin::write()
{
    cout << "пишу мат. анализ\n";
}

void StudentProgin::passTheTest()
{
    cout << "сдал мат. анализ\n";
}
