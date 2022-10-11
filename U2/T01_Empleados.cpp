/* 
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
            Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento así como la cantidad de dinero que recibirá el usuario.
*/

#include <iostream>
using namespace std;

int main ()
{
    double p;
    int dinero = 2400;
    int r;
    cout << "Indique su puntuacion: ";
    cin >> p;
    if (p == 0.0 || p == 0.4 || p >= 0.6)
    {
        if (p == 0.0)
    {
        cout << "Inaceptable :(";
        r = dinero * p;
        cout << "\nDinero recibido: " << r;
    }
    else if (p == 0.4)
    {
        cout << "Aceptable";
        r = dinero * p;
        cout << "\nDinero recibido: " << r;
    }
    else if (p >= 0.6)
    {
        cout << "Meritorio :)";
        r = dinero * p;
        cout << "\nDinero recibido: " << r;
    }
    }
    else 
    {
        cout << "Dato invalido :(";
    }
    return 0;
}