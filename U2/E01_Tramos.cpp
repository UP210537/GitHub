/*
    Alumna: Nelly Esther Espinoza Huerta.

    Los tramos impositivos para la declaración de la renta en un determinado país son los siguientes:
                        Renta                        Impuesto
                    Menos de $10,000                    5%
                    Entre $10,000 y $20,000             15%
                    Entre $20,000 y $35,000             20%
                    Entre $35,000 y $60,000             30%
                    Más de $60,000                      45%
    
    Escribir un programa que pregunte al usuario su renta anual y muestre por pantalla el impuesto que le corresponde.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    int renta;
    int impuesto;
    cout << "introduzca su renta anual \n";
    cin >> renta;
    if (renta >=1)
    {
        if (renta < 10000)
        {
            impuesto = 5;
        }
        else if (renta >= 10000 && renta < 20000)
        {
            impuesto = 15;
        }
        else if (renta >= 20000 && renta < 35000)
        {
            impuesto = 20;
        }
        else if (renta >= 35000 && renta < 60000)
        {
            impuesto = 30;
        }
        else
        {
           impuesto = 45; 
        }
    }
    else
    {
        printf("dato invalido \n");
    }
    cout << "El impuesto que le corresponde a su renta anual es de: " << impuesto << "%" <<endl;
    return 0;
}