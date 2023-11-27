#include "Human.h"

class Student : public Human{
public:
    Student(){}
    Student(string _surname, string _name, string _patronymic,
    unsigned short _age, unsigned short _weight, unsigned short _height, double rau);
    unsigned short getRAU() const;
    void setRAU(const double& rau);

    void getStatus() override;
    void print() override;

private:
    double RAU;
};