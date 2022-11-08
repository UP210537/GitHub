/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Convertir un numero decimal a binario.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int decimal;
    int total;
    float residuo;
    string binario;

    cout << "Ingresa el numero decimal: " << endl;
    cin >> decimal;
    do
    {
        residuo = decimal % 2;
        decimal = decimal / 2;
        if (residuo == 0)
        {
            binario = '0' + binario;
        }
        else
        {
            binario = '1' +  binario;
        }
        total = total + 1;

    } while (total <= 7);
    cout << binario << endl;
    return 0;
}