#include "Human.h"

int main(){
    Human h("Kerzhakov", "Nikita","Alexeevich");
    cout << h.getSurname() << " " << h.getName() << " " << h.getPatronymic() << endl;
}