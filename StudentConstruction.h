#pragma once
#include "Student.h"
#include "Study.h"
class StudentConstruction : public Student, public Study
{
public:
    StudentConstruction();
    StudentConstruction(string _surname, string _name, string _patronymic, u_int16_t _age, u_int16_t _weight, u_int16_t _height, string _institut, double rau);
    void write() override;
    void passTheTest() override;
};