#include <iostream>
#include <string>
using namespace std;

struct persona {
 string nombre;
  int edad; 

};

int main(){
    persona *p = new persona;
    p->nombre = "Gael";
    p->edad = 19;
    cout << p->nombre << endl;
    cout << p->edad << endl;
    delete p;
}