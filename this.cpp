#include <iostream>
#include <string>

using namespace std;

class Persona {
 private:
  string nombre;
  int edad;
  public: 
  Persona(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
  }
   ~Persona(){
    cout << "destructor" << endl;
   }
   Persona &establecerNombre(string nombre){
     this->nombre = nombre;
     return *this;

   } 
   Persona &establecerEdad(int edad) {
    this-> edad = edad;
      return*this;
   }
   void saludar(){
     cout << "Hola soy: " << nombre <<  "mi edad es: " <<endl;
     
   }
};


int main() {
   Persona *p =  new Persona("Gael", 19); 
  
  
  p->establecerNombre("Yosemir").establecerEdad(19).establecerNombre("Gael");
 
  p->saludar();
}