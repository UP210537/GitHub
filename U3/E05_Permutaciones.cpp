/*
Permutaciones = Sí importa el orden.
Combinaciones = No importa el orden.
La permutacion es mayor que la combinacion (da más valores la permutacion)
*/ 

#include <iostream>

using namespace std;

// Declaracion 
long int factorial(int n); //Factorial = variable de tipo entero
long int permutacion(int n, int r); //5P2 = 20
long int combinacion(int n, int r); //5C2 = 10

int main ()
{
    long int r;
    r = factorial(0);
    cout << r << endl;
    cout << permutacion( 5, 2) << endl;
    cout << combinacion( 5, 2) << endl;
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
long int permutacion(int n, int r) //5P2 = 20
{
    long int p;
    p = factorial(n) / factorial(n - r);
    return p;
}
long int combinacion(int n, int r) //5C2 = 10
{
    long int p;
    p = factorial(n) / (factorial(n - r) * factorial(r)); // p = factorial(n) / factorial(n - r) / factorial(r); 
    return p; 
}
