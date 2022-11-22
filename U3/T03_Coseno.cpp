/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Conocer las funciones matematicas dentro de una librería.
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    short int i, j, terminos, expo = 0, signo = -1;
    float angulo;
    double resultado = 0, factorial = 1;
    cout << "Introduzca el angulo:" << endl;
    cin >> angulo;
    cout << "Introduzca el numero de terminos:" << endl;
    cin >> terminos;
    for(i = 0; i <= terminos; i++)
    {
        factorial = 1;
        for(j = 1; j <= expo; j++)
            factorial *= j;
            signo *= -1;
            resultado += signo * pow(angulo, expo) / factorial;
            cout << resultado << endl;
            expo = expo + 2;
    }
    cout << "El coseno de" << angulo << "es: " << resultado << endl;
    return 0;
}