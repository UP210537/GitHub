/* Objetivo: Preguntar al usuario la edad del cliente y mostrar el precio de la entrada
                    Menor de 4 años: Entrada gratis
                    Entre 4-18 años: $5
                    Mayor a 18 años: $10 
*/
#include <iostream>
using namespace std;

int main ()
{
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad >= 0)
    {
        if (edad < 4)
        {
            cout << "Costo: Entrada gratis c:";
        }
        else if (edad >= 4 && edad < 18)
        {
            cout << "Costo: $5";
        }
        else 
        {
            cout << "Costo: $10";
        }
    }
    else
    {
        cout << "Dato invalido :c";
    }
    return 0;
}