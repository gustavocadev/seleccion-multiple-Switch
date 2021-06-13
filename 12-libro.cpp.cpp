#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cantidad;
    cout << "ingrese la cantidad" << endl;
    cin >> cantidad;

    char libro;
    string aceptar;

    cout << "lo quiere a domicilio, si o no?" << endl;
    cin >> aceptar;

    cout << "ingrese el nombre del libro" << endl;
    cin >> libro;

    int construccion = 30;
    int sanitarias = 27;
    int electricas = 20;
    int acabados = 35;

    int precio;
    int aumento;
    switch (libro)
    {
    case 'c':
        precio = construccion * cantidad;
        if (aceptar == "si")
        {
            aumento = precio * 0.02;
            precio += aumento;
            cout << "el precio es de: " << precio << endl;
        }
        else
        {
            cout << "el precio es de: " << precio << endl;
        }
        break;
    case 's':
        precio = sanitarias * cantidad;
        if (aceptar == "si")
        {
            aumento = precio * 0.02;
            precio += aumento;
            cout << "el precio es de: " << precio << endl;
        }
        else
        {
            cout << "el precio es de: " << precio << endl;
        }
        break;
    case 'e':
        precio = electricas * cantidad;
        if (aceptar == "si")
        {
            aumento = precio * 0.02;
            precio += aumento;
            cout << "el precio es de: " << precio << endl;
        }
        else
        {
            cout << "el precio es de: " << precio << endl;
        }
        break;
    case 'a':
        precio = acabados * cantidad;
        if (aceptar == "si")
        {
            aumento = precio * 0.02;
            precio += aumento;
            cout << "el precio es de: " << precio << endl;
        }
        else
        {
            cout << "el precio es de: " << precio << endl;
        }
        break;
    default:
        break;
    }

    return 0;
}