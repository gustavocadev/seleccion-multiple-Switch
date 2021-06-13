#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*
 5.- Diseñar el Algoritmo y programa tal que dado el número del mes y el año de una fecha, determinar qué mes es en letras y cuantos días tiene, considerar que febrero tiene 28 o 29 días si el año es bisiesto, un año es bisiesto si es múltiplo de 4, pero no de 100 y si de 400.
*/
    int numMes;
    int anio;

    cout << "ingrese el numero de mes: " << endl;
    cin >> numMes;

    cout << "ingrese el anio" << endl;
    cin >> anio;

    int bisiesto = anio % 4;
    switch (bisiesto)
    {
    case 0:
        if (numMes == 2)
            cout << "tiene 29 dias" << endl;
        break;

    default:
        if (numMes == 2)
            cout << "tiene 28 dias" << endl;
        break;
    }

    switch (numMes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "tiene 31 dias" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "tiene  30 dias" << endl;
        break;
    default:
        break;
    }

    switch (numMes)
    {
    case 1:
        cout << "El mes es Enero" << endl;
        break;
    case 2:
        cout << "El mes es Febrero" << endl;
        break;
    case 3:
        cout << "El mes es Marzo" << endl;
        break;
    case 4:
        cout << "El mes es April" << endl;
        break;
    case 5:
        cout << "El mes es Mayo" << endl;
        break;
    case 6:
        cout << "El mes es Junio" << endl;
        break;
    case 7:
        cout << "El mes es Julio" << endl;
        break;
    case 8:
        cout << "El mes es Ausgust" << endl;
        break;
    case 9:
        cout << "El mes es September" << endl;
        break;
    case 10:
        cout << "El mes es October" << endl;
        break;
    case 11:
        cout << "El mes es November" << endl;
        break;
    case 12:
        cout << "El mes es December" << endl;
        break;
    default:
        cout << "el mes no existe!" << endl;
        break;
    }
    return 0;
}