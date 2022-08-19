#include <iostream>

using namespace std;

int main() {
    
   do {
        char respuesta;
        cout << "Deseaas terminar?" << endl;
        cin >> respuesta;
        if (respuesta == 'y') {
          cout << "bye bye";
          break;
        } 
    }  while (true);
    
}