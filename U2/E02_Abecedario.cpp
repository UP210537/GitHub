/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
            Imprimir el abecedario
*/

#include <iostream>
using namespace std;

int main (int argc, char const * argv [])
{
    char letra= 'z';
    int numero =1;
    cout << "De la Z a la A \n";
    for (int i =0; i < 26; i++)
    {
        cout <<letra << "\n";
        letra = letra - 1;
    }
    cout << "De la A a la Z \n";
    letra='A';
    for (int i=0; i <26; i++)
    {
        cout <<letra << "\n";
        letra = letra +1;
    }
    cout << "Del 1 al 10 \n";
    numero=1;
    for (int i=0; i <10; i++)
    {
        cout <<numero << "\n";
        numero = numero + 1;
    }
    cout << "Del 10 al 1 \n";
    numero=10;
    for (int i=0; i <10; i++)
    {
        cout <<numero << "\n";
        numero = numero - 1;
    }
    return 0;
}