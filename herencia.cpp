//Herencia clase 13 del curso de POO
#include <iostream>
#include <string> 
using namespace std;

class Animal {
 private:
 static int numero_animales;
 
 public:
 string alimento;
 Animal();
 ~Animal();
 static int obtenerNumeroAnimales();
 string obtenerAlimento() {
    return alimento;
 };
 void comer() {
    cout << "Este animal está comiendo " << alimento << "....ñom ñom" << endl;
 }
 

};


int Animal::numero_animales = 0;

Animal::Animal() {
    cout << "Creando nuevo animal..." << endl;
    numero_animales += 1;
}

Animal::~Animal() {
    cout << "Borrando animal..." << endl;
    numero_animales -= 1;
}

int Animal::obtenerNumeroAnimales() {
    return numero_animales;
}

class Herviboro : public Animal {
    public:
        Herviboro() : Animal() {
            this->alimento = "plantas";
        }
        void pastar() {
            cout << "Este animal está pastando..." << endl;
        }
};

class Carnivoro : public Animal {
    public:
        Carnivoro() : Animal() {
            this->alimento = "carne";
        }
        void cazar() {
            cout << "Este animal está cazando..." << endl;
        }
};


int main(){
  Animal *a = new Animal();
  Herviboro *h = new Herviboro();
  Carnivoro *c = new Carnivoro();
  h->pastar();
  delete a;
  cout << "Numero de animales " << Animal::obtenerNumeroAnimales()<< endl;
  
}