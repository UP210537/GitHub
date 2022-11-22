/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Calcular el año bisiesto que pida el usuario con funciones.
*/
#include<iostream>
#include"Libro.h"

using namespace std;

int main()
{
    int y;
    cout << "El año es bisiesto o no?" << endl;
    cout << "Ingrese el año de su preferencia:" << endl;
    cin >> y;
    y = esBisiesto(y);
    if (y == 1)
    cout << "El año es bisiesto";
    else
    cout << "El año no es bisiesto";
    return 0;
}