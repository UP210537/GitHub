/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Realizar funciones bissecionadas.

Bisección: Algoritmo que va seccionando (haciendo mas chico) hasta encontrar el valor que deseas.
*/

#include <iostream>
#include <cmath>

using namespace std;

double fnEcuacion1(double x) // x^2 - 8x + 15
{
    /*
    double y;
    y = pow(x, 2) - 8*x + 15; // Elevar un numero a la potencia que tú le digas.
    return y;
    */
    return (pow(x, 2) - 8*x + 15); // Otra forma de escribir todo lo anterior.
}
int main()
{
    double x1 = -10;
    double x2 = 4.5;
    double xPromedio;

    double ErrorEstandar = .00001; // Le digo que quiero que mi error sea exactamente dos decimales exactos. (Tambien llamado error absoluto o total)
    double ErrorRelativo = abs(x2 - x1); // Va redunciendo para que sea menor que el Error Estandar.
    // abs = sacamos el valor absoluto, sin signo
    int i = 1;
    while (ErrorRelativo > ErrorEstandar)
    {
        xPromedio = (x1 + x2)/2;
        if (fnEcuacion1(x1) * fnEcuacion1(xPromedio) < 0)
        {
            x2 = xPromedio;
        
        } 
        else 
        {
            x1 = xPromedio;
        }
        ErrorRelativo = abs(x2 - x1);
        i = i + 1;
    }
    cout << "i = " << i << "\nraiz = " << xPromedio << endl;
    cout << "...Hecho :)";
    return 0;
}