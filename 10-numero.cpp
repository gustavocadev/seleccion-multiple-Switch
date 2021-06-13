#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cout << "ingrese un numero entero" << endl;
    cin >> n;

    int a, b;
    cout << "ingrese A y B" << endl;
    cin >> a;
    cin >> b;

    int z;
    int mayor = a < b;
    switch (n)
    {
    case 0:
        z = 1;
        cout << "el numero es: " << z << endl;
        break;
    case 7:
    case 4:
        z = 2;
        cout << "el numero es: " << z << endl;
        if (mayor)
        {
            z = 7;
            cout << "el numero es: " << z << endl;
        }
        break;
    case 5:
        z = 5;
        cout << "el numero es: " << z << endl;
        break;
    default:
        z = 8;
        cout << "el numero es: " << z << endl;
        break;
    }

    return 0;
}