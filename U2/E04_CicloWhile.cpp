/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
          While mientras True
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    char opcion = 's';
    printf ("Tabla de multiplicar \n");
    while (opcion == 's')
    {
        // Entrada
        printf ("Numero: ");
        scanf ("%d", &n);
        
        // Proceso
        i = 1;
        do
        {
          printf ("%d x %d = %d \n", n, i, n * i);
          i++;
        } while (i <= 10);
        
        printf ("\nDesea otro <si/no> ");
        scanf ("%s", &opcion);
    }
    printf ("\n...Hecho");
    return 0;
}