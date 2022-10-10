/* 
Objetivo: Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas baja y la mas alta.
*/
#include <iostream>
using namespace std;

int main ()
{
    int temperatura, mayor, menor, promedio;
    float sumatoria = 0;
    for (int i = 1; i <= 6; i++)
    {
        cout << "Ingrese la temperatura numero " << i << ": " << endl;
        cin >> temperatura;
        sumatoria = sumatoria + temperatura;
        if (i == 1)
        {
            mayor = temperatura;
            menor = temperatura;
        }
        else
        {
            if (temperatura > mayor)
            {
                mayor = temperatura;
            }
            else
            {
                if ( temperatura < menor)
                {
                    menor = temperatura;
                }
            }
        }
    }
    cout << "El promedio de las seis temperaturas es: " << (sumatoria) / 6;
    cout << "\nLa temperatura mas elevada fue: " << mayor;
    cout << "\nLa temperatura mas baja fue: " << menor;
    return 0;
}
