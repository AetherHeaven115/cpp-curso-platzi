#include <iostream>
#include <string>

using namespace std;

class Persona {
  // toda variable que sea escrita en public se puede ver desde del mismo objeto
  public:
  string nombre;
  int edad;

  Persona(string n){
    nombre = n; 
   
  }
   ~Persona(){
    cout << "destructor" << endl;
   }
   void saludar(){
     cout << nombre <<endl;
     
   }
};

int main(){
  //Todas las personas que se creen tedran el nombre de Gael y edad de 19
  Persona *p =  new Persona("Gael"); 
  Persona *p2 =  new Persona("Mario");
  
  delete p2;
   
  p->saludar();
  p2->saludar();


}