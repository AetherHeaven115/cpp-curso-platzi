#include <iostream>

using namespace std;

int main() {
    int option = 0;
    cout << "Elije tu option";
    cin >> option;
   switch(option) {
     case 1: 
     cout << "Opcion 1";
     break;
     case 2: 
     cout << "Opcion2";
     break;
     default:
     cout << "Ese menu no existe";
     break;
   }
}