# Unidad 1
### *Introducción a la programación.*  
![Yeonjun](https://i.pinimg.com/564x/9e/f7/07/9ef70774832c5225b36a6f0775e93460.jpg)  

La programación es el proceso de crear un conjunto de instrucciones que le dicen a una computadora como realizar algún tipo de tarea. Pero no solo la acción de escribir un código para que la computadora o el software lo ejecute. Incluye, además, todas las tareas necesarias para que el código funcione correctamente y cumpla el objetivo para el cual se escribió.

![Yeonjun2](https://i.pinimg.com/564x/2b/c1/0d/2bc10d343d59f056c0c21665bd3fe5fd.jpg)  
 
En la actualidad, la noción de programación se encuentra muy asociada a la creación de aplicaciones de informática y videojuegos. En este sentido, es el proceso por el cual una persona desarrolla un programa, valiéndose de una herramienta que le permita escribir el código (el cual puede estar en uno o varios lenguajes, como C++, Java y Python, entre muchos otros) y de otra que sea capaz de “traducirlo” a lo que se conoce como lenguaje de máquina, que puede "comprender" el microprocesador.

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