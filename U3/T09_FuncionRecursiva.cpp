/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Factorial utilizando el método recursivo..
*/
#include<iostream>

using namespace std;

int factorial(int n)
{
    if(n < 2)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int numero;
    cout << "Introduce un numero:" << endl;
    cin >> numero;
    cout << "El resultado es: " << factorial(numero);
    return 0;
}