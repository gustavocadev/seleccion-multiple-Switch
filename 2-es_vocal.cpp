#include <iostream>
#include <string>
using namespace std;

int main() {

/*
2.- Diseñar el Algoritmo y programa, tal que dado una letra determinar si es vocal.
*/

char letter;

cout << "ingrese una letra" << endl;
cin >> letter;

switch (letter) {
    case 'a': cout << "es vocal" << endl;
        
        break;

    case 'e': cout << "es vocal" << endl;
        
        break;
    case 'i': cout << "es vocal" << endl;
        
        break;
    case 'o': cout << "es vocal" << endl;
        
        break;
    case 'u': cout << "es vocal" << endl;
        
        break;

    default: cout << "esa letra no es vocal " << endl;
        break;
}
  return 0;
}