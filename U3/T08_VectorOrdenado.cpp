/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Investigar sobre cómo ordenar un vector con uno de los métodos que más nos guste.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int vector[] = {3, 2, 1, 5, 4};
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(vector[i] > vector[j])
            {
                int aux = vector[i];
                vector[i] = vector [j];
                vector[j] = aux;
            }
        }
    }
    printf ("Numeros acomodados del 1 al 5:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", vector[i]);
    }
    return 0;
}
/* Se utilizó el algoritmo de selección.
Este algoritmo se llama ordenamiento por selección porque 
selecciona repetidamente el siguiente elemento más bajo y 
lo intercambia a su lugar.

Consiste en encontrar el menor de todos los elementos del 
vector e intercambiarlo con el que está en la primera posición. 
Luego el segundo mas pequeño, y así sucesivamente hasta ordenarlo todo.
*/