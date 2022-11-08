/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Implementar el Switch Case en operaciones basicas.
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 6, b = 2;
    double r;
    int opcion = 4;

    cout << "[1] Suma" << endl << "[2] Resta" << endl << "[3] Multiplicacion" << endl << "[4] Division" << endl;
    cout << "Ingrese un cero si desea salirse" << endl;
    cout << "Que operacion desea realizar: ";
    cin >> opcion;
    while (opcion != 0)
    {
        switch (opcion)
        {
        case 1:
            cout << "Suma" << endl;
            r = a + b;
            cout << r << endl;
            break;
        case 2:
            cout << "Resta" << endl;
            r = a - b;
            cout << r << endl;
            break;
        case 3:
            cout << "Multiplicacion" << endl;
            r = a * b;
            cout << r << endl;
            break;
        case 4:
            cout << "Division" << endl;
            if (b != 0)
            {
                r = a / b;
                cout << r << endl;
            }
            else
            {
                cout << "Division invalida" << endl;
            }
            break;
        default:
            cout << "Opcion Invalida" << endl;
            break;
        }
    cout << endl;
    cout << "[1] Suma" << endl << "[2] Resta" << endl << "[3] Multiplicacion" << endl << "[4] Division" << endl;
    cout << "Ingrese un cero si desea salirse" << endl;
    cout << "Que operacion desea realizar: ";
    cin >> opcion;
    }
    return 0;
}