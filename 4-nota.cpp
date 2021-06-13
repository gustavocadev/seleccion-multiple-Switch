#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
4.- Diseñar el Algoritmo y programa tala que dada la nota promedio de un alumno obtener la categoría, según 
la siguiente tabla:

ROMEDIO           CATEGORIA
ENTRE: 0 Y 5      PESIMO
ENTRE: 6 Y 10     MALO
ENTRE: 11 Y 14    REGULAR
ENTRE: 15 Y 17    BUENO
ENTRE: 18 Y 20    EXCELENTE

*/

    int nota;
    cout << "ingrese su promedio" << endl;
    cin >> nota;

    switch (nota)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "su promedio es pesimo" << endl;

        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        cout << "su promedio es malo" << endl;

        break;
    case 11:
    case 12:
    case 13:
    case 14:
        cout << "su promedio es regular" << endl;

        break;
    case 15:
    case 16:
    case 17:
        cout << "su promedio es bueno" << endl;

        break;
    case 18:
    case 19:
    case 20:
        cout << "su promedio es EXCELENTE" << endl;

        break;
    default:
        cout << "ese promedio no existe" << endl;
        break;
    }

    return 0;
}