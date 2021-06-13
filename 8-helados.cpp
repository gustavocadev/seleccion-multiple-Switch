#include <iostream>
#include <string>
using namespace std;

int main()
{

    int helados;
    cout << "ingrese la cantidad de helados: " << endl;
    cin >> helados;

    char tipoHelado;
    cout << "ingrese el tipo de helado" << endl;
    cin >> tipoHelado;

    float precio;

    float sol = 1.5;
    float fresa = 2.0;
    float mar = 1.7;
    float rico = 2.5;

    switch (tipoHelado)
    {
    case 's':

        precio = helados * sol;
        cout << "el importe a pagar es: " << precio << endl;
        break;
    case 'f':

        precio = helados * fresa;
        cout << "el importe a pagar es: " << precio << endl;
        break;
    case 'm':

        precio = helados * mar;
        cout << "el importe a pagar es: " << precio << endl;
        break;
    case 'r':

        precio = helados * rico;
        cout << "el importe a pagar es: " << precio << endl;
        break;

    default:
        cout << "el helado no existe!" << endl;
        break;
    }
    return 0;
}