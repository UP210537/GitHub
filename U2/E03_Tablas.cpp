/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
          Realizar un programa donde se realice la tabla del 5 en:
                         For y For invetido
                        While y While invertido
                    Do While y Do While invertido
*/

#include <iostream>
using namespace std;

int main (int argc, char const *argv[])
{
    int n = 5;
    int r = 0;
    int c = 1;
    cout << "Tabla del cinco con:";
    cout << "\n" << "For" << "\n";
    for (int i = 1; i <= 10; i++)
    {
        r = n * i;
        cout << n << " x " << i << " = " << r << endl; //endl es para avanzar la línea
    }
    cout << "\n" << "For invertido" << "\n";
    for (int i = 10; i >= 1; i --)
    {
        r = n * i;
        cout << n << " x " << i << " = " << r << endl;
    }
    cout << "\n" << "While" << "\n";
    while (c <= 10)
    {
        r = n * c;
        cout << n << " x " << c << " = " << r << endl;
        c++;
    }
    cout << "\n" << "While invertido" << "\n";
    c = 10;
    while (c >= 1)
    {
        r = n * c;
        cout << n << " x " << c << " = " << r << endl;
        c--;
    }
    cout << "\n" << "Do While" << "\n";
    c = 1;
    do
    {
        r = n * c;
        cout << n << " x " << c << " = " << r << endl;
        c++;
    }
    while (c <= 10);
    cout << "\n" << "Do While invertido" << "\n";
    c = 10;
    do
    {
        r = n * c;
        cout << n << " x " << c << " = " << r << endl;
        c--;
    }
    while (c >= 1);
    return 0;
}