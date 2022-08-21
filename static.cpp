//Clase 12 del curo de programacion orientada a objetos 
#include <iostream>
#include <string> 

using namespace std;

class Persona {
 private:
  string nombre;
  int edad;
  public: 
  static int numero_personas;
  Persona(string nombre, int edad);

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
   void saludar();
};
 
int Persona::numero_personas = 0;
void Persona:: saludar () {
    cout << "Hola soy: " << nombre <<  " mi edad es: " <<endl;
     
} 

Persona::Persona(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
    numero_personas += 1;
}


int main() {
   Persona *p =  new Persona("Gael", 19); 
  
  cout << Persona::numero_personas << endl;

  p->establecerNombre("Yosemir").establecerEdad(19).establecerNombre("Gael");
 
  p->saludar();
}