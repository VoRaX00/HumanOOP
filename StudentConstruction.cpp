#include "StudentConstruction.h"
StudentConstruction::StudentConstruction()
{
}
StudentConstruction::StudentConstruction(string _surname, string _name, string _patronymic, u_int16_t _age, u_int16_t _weight, 
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
void StudentConstruction::write()
{
    cout << "пишу сопромат\n";
}

void StudentConstruction::passTheTest()
{
    cout << "начерт сдан\n";
}
