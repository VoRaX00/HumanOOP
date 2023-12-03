#pragma once
#include <iostream>

using namespace std;

class Human{
public:
    Human(){}
    Human(string _surname, string _name, string _patronymic) :
    surname(_surname), name(_name), patronymic(_patronymic){}

    Human(string _surname, string _name, string _patronymic, u_int16_t _age, u_int16_t _weight, u_int16_t _height)
    : surname(_surname), name(_name), patronymic(_patronymic), age(_age), weight(_weight), height(_height){}

    void setName(const string& _name);

    void setSurname(const string& _surname);

    void setPatronymic(const string& _patronymic);

    void setAge(const u_int16_t& _age);

    void setWeight(const u_int16_t& _weight);

    void setHeight(const u_int16_t& _height);

    string getName() const;

    string getSurname() const;

    string getPatronymic()const;

    u_int8_t getAge() const;

    u_int8_t getWeight() const;

    u_int8_t getHeight() const;

    virtual void getStatus();

    virtual void print();

protected:
    string name;
    string surname;
    string patronymic;
    u_int16_t age;
    u_int16_t weight;
    u_int16_t height;
};