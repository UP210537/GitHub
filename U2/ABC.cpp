/*
    Objetivo: Imprimir el abecedario
    Nombre: Nelly Esther Espinoza Huerta.
*/
#include <iostream>
using namespace std;

int main (int argc, char const * argv [])
{
    char letra= 'z';
    int numero =1;
    for (int i =0; i < 26; i++)
    {
        cout <<letra << "\t";
        letra = letra - 1;
    }
    letra='A';
    for (int i=0; i <26; i++)
    {
        cout <<letra << "\t";
        letra = letra +1;
    }
    numero=1;
    for (int i=0; i <10; i++)
    {
        cout <<numero << "\t";
        numero = numero + 1;
    }
    numero=10;
    for (int i=0; i <10; i++)
    {
        cout <<numero << "\t";
        numero = numero - 1;
    }
    return 0
}