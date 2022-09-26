#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int suma = 0;
    int par = 0;
    int impar = 0;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
          par = par + i;   
        }
        else
        {
          impar = impar + i;
        } 
    }
    suma=par+impar;
    printf("El resultado de la suma de los pares es: %d \n", par);
    printf("El resultado de la suma de los impares es: %d \n", impar);
    printf("El resultado de la suma es: %d \n", suma );
    return 0;
}