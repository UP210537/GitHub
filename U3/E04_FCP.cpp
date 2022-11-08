//Factorial, combinaciones y permutaciones.
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Realizar funciones con factorial, combinaciones y permutaciones.
*/


#include <iostream>

using namespace std;

// Declaracion 
long int factorial(int n); //Factorial = variable de tipo entero

int main ()
{
    long int r;
    r = factorial(4);
    cout << r << endl;
    return 0;
}

long int factorial(int n)
{
    long int  ft = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        ft *= i; // ft = ft * i
    }
    return ft;
}