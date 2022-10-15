# **Unidad 2**
>## *Conociendo las estructuras de control y los ciclos.*

![Taehyun](https://i.pinimg.com/564x/6e/2f/90/6e2f90b974d5b15eb7ceb58d4ab82c60.jpg)

## *Aprendiendo de los ciclos*
### *Ciclo For:*
Con este tipo de ciclo puedes establecer el número de iteraciones que necesitas que tu bucle repita hasta que quieras que se acabe.

La sintaxis del bucle For funciona de la siguiente manera:  
```
for (size_t i = 0; i < count; i++)
{
    /* code */
}
```

### *Ciclo While:*
Lo que hace este ciclo es mantener funcionando un apartado de código, solo mientras la condición while sea verdadera.

La sintaxis general de cómo luce un bucle While:
```
while (/* condition */)
{
    /* code */
}
```

### *Ciclo Do While:*
Al igual que el While, controla la iteración mientras sea positiva, pero en la última parte del bucle. Es decir, un código se repetirá, después de ser ejecutado, cuando se cumpla la condición.

La sintaxis del Do While luce de la siguiente forma:
```
do
{
    /* code */
} while (/* condition */);
```
![Taehyun2](https://i.pinimg.com/236x/f0/3f/c6/f03fc6b7e6a79c0f510ca2c0b390d3ef.jpg)  

## *¿Qué son las estructuras de control?*  
Las estructuras de control nos permiten modificar el flujo de ejecución de las instrucciones de un programa.  
Con las estructuras de control se puede:

* De acuerdo con una condición, ejecutar un grupo u otro de sentencias (If-Then-Else)
* De acuerdo con el valor de una variable, ejecutar un grupo u otro de sentencias (Select-Case)
* Ejecutar un grupo de sentencias mientras se cumpla una condición (Do-While)
* Ejecutar un grupo de sentencias hasta que se cumpla una condición (Do-Until)
* Ejecutar un grupo de sentencias un número determinado de veces (For-Next)  
## *Estructuras de decisión*  
### *If:*  
Se utiliza para probar si una determinada condición se ha alcanzado.  

Ejemplo: Averiguar si un valor analógico está por encima de un cierto número, y ejecutar una serie de declaraciones (operaciones) que se escriben dentro de llaves, si es verdad. Si es falso (la condición no se cumple) el programa salta y no ejecuta las operaciones que están dentro de las llaves.

### *If… else:*  
Se ejecuta en respuesta a la idea “si esto no se cumple haz esto otro”. 

Ejemplo: Si se desea probar una entrada digital, y hacer una cosa si la entrada fue alto o hacer otra cosa si la entrada es baja.

### *Else:* 
Puede ir precedido de otra condición de manera que se pueden establecer varias estructuras condicionales de tipo unas dentro de las otras (anidamiento) de forma que sean mutuamente excluyentes pudiéndose ejecutar a la vez. 

### *Switch.. case:* 
Al igual que If, Switch... case controla el flujo del programa especificando en el programa que código se debe ejecutar en función de unas variables. En este caso en la instrucción switch se compara el valor de una variable sobre los valores especificados en la instrucción case.

### *Break:*  
Es la palabra usada para salir del switch. Si no hay break en cada case, se ejecutará la siguiente instrucción case hasta que encuentre un break o alcance el final de la instrucción.

### *Default:*  
Es la palabra que se usa para ejecutar el bloque en caso que ninguna de las condiciones se cumpla. 
![Taehyun3](https://i.pinimg.com/564x/d4/ef/3c/d4ef3cb210fb7c5eb293d67a8a7558b3.jpg)

>## *Ejercicios realizados en esta unidad:*  
### *En clase:*  
***E01_Tramos:***  
*Programa:* 
``` 
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
```  
*Resultado:*  
![Tramo](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Tramos.png)  
E02_Abecedario:  
![Abecedario1](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Abecedario1.png)  
![Abecedario2](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Abecedario2.png)  
E03_Tablas:  
![Tablas1](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Tablas1.png)  
![Tablas2](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Tablas2.png)  
E04_CicloWhile:  
![CicloWhile](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/CicloWhile.png)  
E05_ForFor:  
![ForFor1](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/ForFor1.png)  
![ForFor2](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/ForFor2.png)  
![ForFor3](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/ForFor3.png)  
![ForFor4](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/ForFor4.png)  
### *Ejercicios realizados de tarea:*  
T01_Empleados:  
![Empleados](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Empleados.png)  
T02_SalaDeJuegos:  
![SalaDeJuegos](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/SalaDeJuegos.png)  
T03_Pizzería:  
![Pizzería](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Pizzería.png)  
T04_Temperaturas:  
![Temperaturas](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Temperaturas.png)  
T05_Factura:  
![Factura](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Factura.png)  
T06_BinarioADecimal:  
![BinarioADecimal](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/BinarioADecimal.png)  