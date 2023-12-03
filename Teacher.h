#pragma once
#include "Human.h"

class Teacher : public Human
{
public:
    Teacher(){}
    Teacher(string _surname, string _name, string _patronymic, u_int16_t _age, u_int16_t _weight, u_int16_t _height, string _nameSubject);

    string getSubject() const;
    void setSubject(string _nameSubject);
    void print() override;

private:
    string nameSubject;
};