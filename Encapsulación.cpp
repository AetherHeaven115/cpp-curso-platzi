#include <iostream>
#include <string>

using namespace std;

class Persona {
 private:
  string nombre;
  int edad;
  public: 
  Persona(string n, int e): nombre(n), edad(e){

  }
   ~Persona(){
    cout << "destructor" << endl;
   }
   void saludar(){
     cout << nombre <<endl;
     
   }
};


int main(){
   Persona *p =  new Persona("Gael", 19); 
  Persona *p2 =  new Persona("Mario",38);
  
  

  p->saludar();
  p2->saludar();
  
}