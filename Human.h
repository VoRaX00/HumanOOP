#include <iostream>

using namespace std;

class Human{
public:
    Human(){}
    Human(string _surname, string _name, string _patronymic) :
    surname(_surname), name(_name), patronymic(_patronymic){}

    Human(string _surname, string _name, string _patronymic,unsigned short _age, unsigned short _weight, unsigned short _height)
    : surname(_surname), name(_name), patronymic(_patronymic), age(_age), weight(_weight), height(_height){}

    void setName(const string& _name);

    void setSurname(const string& _surname);

    void setPatronymic(const string& _patronymic);

    void setAge(const unsigned short& _age);

    void setWeight(const unsigned short& _weight);

    void setHeight(const unsigned short& _height);

    string getName() const;

    string getSurname() const;

    string getPatronymic()const;

    unsigned short getAge() const;

    unsigned short getWeight() const;

    unsigned short getHeight() const;

private:
    string name;
    string surname;
    string patronymic;
    unsigned short age;
    unsigned short weight;
    unsigned short height;
};