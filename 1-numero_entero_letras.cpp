#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
  1.- Diseñar el Algoritmo y programa, tal que dado un número entero de un digito (0 al 9), devolver el número en letras.
  */
    int num;

    cout << "ingrese el numero: " << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "A" << endl;

        break;
    case 2:
        cout << "B" << endl;

        break;
    case 3:
        cout << "C" << endl;

        break;
    case 4:
        cout << "D" << endl;

        break;
    case 5:
        cout << "E" << endl;

        break;
    case 6:
        cout << "F" << endl;

        break;
    case 7:
        cout << "G" << endl;

        break;
    case 8:
        cout << "H" << endl;

        break;
    case 9:
        cout << "I" << endl;

        break;

    default:
        cout << "no esta disponible el numero con esa letra" << endl;
        break;
    }

    return 0;
}