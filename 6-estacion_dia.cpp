#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
6.- Diseñar el Algoritmo y programa que permita ingresar el día y el número de un mes y devuelva la estación del año de acuerdo a la siguiente tabla:
ESTACION    TIEMPO
VERANO      Del 21 de Diciembre al 20 de Marzo
OTOÑO       Del 21 de Marzo al 21 de junio
INVIERNO    Del 22 de Junio al 22 de Setiembre
PRIMAVERA   Del 23 de Setiembre al 20 de Diciembre
*/
    int numMes;
    cout << "ingrese el numero del mes: " << endl;
    cin >> numMes;

    int diaMes;
    cout << "ingrese el numero el dia(en numeros) del mes" << endl;
    cin >> diaMes;

    switch (numMes)
    {
    case 1:
    case 2:
        cout << "la estacion es verano" << endl;
        break;
    case 3:
        if (diaMes > 20)
        {
            cout << "la estacion es otonio" << endl;
        }
        else
        {
            cout << "la estacion es verano" << endl;
        }
        break;
    case 4:
    case 5:
        cout << "la estacion es otonio" << endl;
        break;
    case 6:
        if (diaMes > 20)
        {
            cout << "la estacion es invierno" << endl;
        }
        else
        {
            cout << "la estacion es otonio" << endl;
        }
        break;
    case 7:
    case 8:
        cout << "la estacion es invierno" << endl;
        break;
    case 9:
        if (diaMes > 21)
        {
            cout << "la estacion es primavera" << endl;
        }
        else
        {
            cout << "la estacion es invierno" << endl;
        }
        break;
    case 10:
    case 11:
        cout << "la estacion es primavera" << endl;
        break;
    case 12:
        if (diaMes > 19)
        {
            cout << "la estacion es verano" << endl;
        }
        else
        {
            cout << "la estacion es primavera" << endl;
        }
        break;
    default:
        break;
    }

    return 0;
}