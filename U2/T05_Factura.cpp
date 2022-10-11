/* 
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
            Hacer un programa que lea indefinidamente cantidades de productos y su precio, y al final indique el total de la factura.
            Para saber que se ha terminado con la compra, se deberá ingresar un 0 en la cantidad.
*/

#include <iostream>
using namespace std;

int main()
{
    int c = 0;
    int p = 0;
    int t = 0;
    int s = 0;

    do
    {
        cout << "Cantidad de productos \n";
        cin >> c;
        cout << "Precio por unidad \n";
        cin >> p;

        s = c * p;

        t = t + s;

    } while ( c != 0);

    cout << "El total a pagar es: " << t;
    cout << "\nvuelva pronto :D";
    
    return 0;

}