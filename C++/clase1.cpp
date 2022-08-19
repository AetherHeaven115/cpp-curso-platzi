#include <iostream>

using namespace std;


int main() {
  int edad = 0;
  cout << "edad:";
  cin >> edad;

  if (edad >= 18) {
    cout<< "no puedes votar";
  } else if (edad > 49) {
    cout << "No puedes votar";
  } else{
    cout << " puedes votar";
  }
}

