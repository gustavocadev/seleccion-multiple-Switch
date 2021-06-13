#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*
3.- Diseñar el Algoritmo y programa tal que permita ingresar el número de un mes, devolver la estación del 
año de acuerdo a la siguiente tabla:
MES       ESTACIÓN 
1,2,3     Verano
4,5,6     Otoño
7,8,9     Invierno
10,11,12  Primavera
¿? E.     Desconocida

*/
    int num;
    cout << "ingrese el numero de un mes" << endl;
    cin >> num;

    switch (num)
    {
    case 1:
    case 2:
    case 3:
        cout << "es verano" << endl;

        break;

    case 4:
    case 5:
    case 6:
        cout << "es otonio" << endl;

        break;
    case 7:
    case 8:
    case 9:
        cout << "es invierno" << endl;

        break;
    case 10:
    case 11:
    case 12:
        cout << "es primavera" << endl;

        break;

    default:
        cout << "ese numero de mes no existe" << endl;
        break;
    }
    return 0;
}