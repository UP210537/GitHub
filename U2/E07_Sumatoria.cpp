/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Realizar la sumatoria de los numeros del 1 al 10.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=1;
    int total=0;
    do
    {
        total+=n;
        n++;
    }while (n<=10);
    {
        cout<<"La sumatoria de los numeros del 1 al 10 es: "<<total<<endl;
    }
    
    return 0;
}