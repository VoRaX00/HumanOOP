#pragma once
#include "Human.h"

class Student : public Human{
public:
    Student(){}
    Student(string _surname, string _name, string _patronymic,
    u_int16_t _age, u_int16_t _weight, u_int16_t _height, string _institut, double rau);
    double getRAU() const;
    void setRAU(const double& rau);
    string getInstitut() const;
    void setInstititut(const string& _institut);

    void getStatus() override;
    void print() override;

protected:
    string institut;
    double RAU;
};