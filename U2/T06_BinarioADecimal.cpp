/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Realizar un programa que haga la conversión de binario a decimal, solo para numeros mayores a 0.
            El resultado puede ser mostrado mediante una variable entera o en un conjunto de caracteres.

*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int binario, resultado, demas=0;
    int digito[8];
    cout << "Introduce el numero en binario: " << endl;
    cin >> binario;
    for (int i = 0; i < 8; i++)
    {
    digito[i] = binario%10;
    binario/=10;
    }
    for (int i = 7; i >= 0; i--)
    {
        resultado = (demas*2) + digito[i];
        demas = resultado;
    }
    cout << "El numero en decimal es: " << resultado << endl;
    return 0;
}