#include "StudentProgin.h"
#include "Teacher.h"
#include "StudentConstruction.h"
#include <vector>
int main(){
    StudentProgin* student = new StudentProgin("Кержаков", "Никита", "Алексеевич", 19, 90, 190, "ИМКТ", 4.444);
    student->setWeight(85);
    StudentConstruction* studentConstr = new StudentConstruction("Дроздович", "Юлия", "Сергеевна", 19, 50, 158, "ПИ", 4.333);
    Teacher* teacher = new Teacher("Осипова", "Марина", "Анатольевна", 48, 50, 163,"Мат. анализ");
    teacher->setAge(50);
    vector<Human*>arr{student, studentConstr, teacher};
    for(auto i : arr){
        i->print();
        cout << endl;
    }
}