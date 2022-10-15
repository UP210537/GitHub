# Unidad 1
### *Conociendo las estructuras de control.*  
![Yeonjun](https://i.pinimg.com/564x/9e/f7/07/9ef70774832c5225b36a6f0775e93460.jpg)  

Las estructuras de control nos permiten modificar el flujo de ejecución de las instrucciones de un programa.  
Con las estructuras de control se puede:

* De acuerdo con una condición, ejecutar un grupo u otro de sentencias (If-Then-Else)
* De acuerdo con el valor de una variable, ejecutar un grupo u otro de sentencias (Select-Case)
* Ejecutar un grupo de sentencias mientras se cumpla una condición (Do-While)
* Ejecutar un grupo de sentencias hasta que se cumpla una condición (Do-Until)
* Ejecutar un grupo de sentencias un número determinado de veces (For-Next)  
![Yeonjun2](https://i.pinimg.com/564x/2b/c1/0d/2bc10d343d59f056c0c21665bd3fe5fd.jpg)  

### *Estructuras de decisión*  
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

![Yeonjun3](https://i.pinimg.com/564x/c6/15/e1/c615e13a375e1d466796cea4e79f2973.jpg)  

## *Ejercicios realizados en esta unidad:*  
### *En clase:*  
***E01_HolaMundo:***   
*Programa:* 
```
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Hola Mundo" << endl;
    return 0;
}
```  
*Resultado:*  
![HolaMundo](https://github.com/UP210537/UP210537_CPP/blob/master/U1/Imagenes/HolaMundo.png)  

E02_ParImpar:  
*Programa:* 
```
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Par o Impar" << endl;
    return 0;
}
```  
*Resultado:*  
![ParImpar](https://github.com/UP210537/UP210537_CPP/blob/master/U1/Imagenes/ParImpar.png)  

E03_TiposDeDatos: 
*Programa:* 
``` 
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    int entero= 21;
    float flotante=3.4e38;
    double grande= 2.5654;
    char caracter= 65;
    cout << "Este programa demuestra los tipos datos, \n";
    cout << "El numero entero es: "<< entero << endl;
    cout << "el tamaño del entero es:" << sizeof (entero) << "bytes" << endl;
    cout << "El numero entero es: "<< caracter << endl;
    cout << "el tamaño del entero es:" << sizeof (caracter) << "bytes" << endl;

    return 0;

}
```  
*Resultado:*  
![TiposDeDatos](https://github.com/UP210537/UP210537_CPP/blob/master/U1/Imagenes/TiposDeDatos.png)  

E04_Ciclos:  
*Programa:* 
``` 
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int suma = 0;
    int par = 0;
    int impar = 0;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
          par = par + i;   
        }
        else
        {
          impar = impar + i;
        } 
    }
    suma=par+impar;
    printf("El resultado de la suma de los pares es: %d \n", par);
    printf("El resultado de la suma de los impares es: %d \n", impar);
    printf("El resultado de la suma es: %d \n", suma );
    return 0;
}
```  
*Resultado:*  
![Ciclos](https://github.com/UP210537/UP210537_CPP/blob/master/U1/Imagenes/Ciclos.png)  

### *De tarea:*  
T01_Edades:  
*Programa:* 
``` 
/*
    Objetivo: Definir la etapa de la persona
            [1..150] Validacion
            [ 1..30] 1ra Edad
            [31..60] 2da Edad
            [61..90] 3ra Edad
            [91..  ] Horas Extras
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    int e;
    cout << "dime tu edad \n";
    cin >>e;
    if (e >= 1 && e <= 150)
    {
        if (e <= 30)
        {
            printf("1er edad \n");
        }
        else if (e >= 31 && e <= 60)
        {
            printf("2da edad \n");
        }
        else if (e >= 61 && e <= 90)
        {
            printf("3er edad \n");
        }
        else
        {
           printf("Horas Extras \n"); 
        }
    }
    else
        printf("dato invalido \n");

    return 0;
}
```  
*Resultado:*  
![Edades](https://github.com/UP210537/UP210537_CPP/blob/master/U1/Imagenes/Edades.png)  