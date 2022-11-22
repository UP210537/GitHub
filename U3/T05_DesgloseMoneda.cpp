/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Realizar el desglose para dar un cambio en numero.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int cantidad = 3699;
    int a[10];
    int monedas[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int total = 0;

    total = cantidad;

    for (int i = 0; i <= 10; i++)
    {
        if (cantidad >= monedas[i])
        {
            a[i] = 0;

            while (cantidad >= monedas[i])
            {
                cout << cantidad / monedas[i] << " de " << monedas[i] << endl;

                cantidad = cantidad % monedas[i];

                a[i]++;
            }

        }

    }

    cout << "Total: " << total << endl;

    return 0;
}