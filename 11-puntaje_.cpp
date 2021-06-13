#include <iostream>
#include <string>
using namespace std;

int main()
{

    int puntajeDado;

    cout << "ingrese puntaje del dado" << endl;
    cin >> puntajeDado;

    switch (puntajeDado)
    {
    case 1:
    case 2:
        cout << "la calificacion es pesima: " << endl;
        break;
    case 3:
    case 4:
        cout << "la calificacion es regular: " << endl;
        break;
    case 5:
        cout << "la calificacion es muy bien: " << endl;
        break;
    case 6:
        cout << "la calificacion es EXCELENTE: " << endl;
        break;

    default:
        cout << "no existe ese puntaje" << endl;
        break;
    }
    return 0;
}