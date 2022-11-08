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
## *En clase:*  
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

***E02_Abecedario:***  
*Programa:* 
```
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
```  
*Resultado:*  
![Abecedario1](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Abecedario1.png)  
![Abecedario2](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Abecedario2.png)  

***E03_Tablas:***  
*Programa:* 
```
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
          Realizar un programa donde se realice la tabla del 5 en:
                         For y For invetido
                        While y While invertido
                    Do While y Do While invertido
*/

#include <iostream>
using namespace std;

int main (int argc, char const *argv[])
{
    int n = 5;
    int r = 0;
    int c = 1;
    cout << "Tabla del cinco con:";
    cout << "\n" << "For" << "\n";
    for (int i = 1; i <= 10; i++)
    {
        r = n * i;
        cout << n << " x " << i << " = " << r << endl; //endl es para avanzar la línea
    }
    cout << "\n" << "For invertido" << "\n";
    for (int i = 10; i >= 1; i --)
    {
        r = n * i;
        cout << n << " x " << i << " = " << r << endl;
    }
    cout << "\n" << "While" << "\n";
    while (c <= 10)
    {
        r = n * c;
        cout << n << " x " << c << " = " << r << endl;
        c++;
    }
    cout << "\n" << "While invertido" << "\n";
    c = 10;
    while (c >= 1)
    {
        r = n * c;
        cout << n << " x " << c << " = " << r << endl;
        c--;
    }
    cout << "\n" << "Do While" << "\n";
    c = 1;
    do
    {
        r = n * c;
        cout << n << " x " << c << " = " << r << endl;
        c++;
    }
    while (c <= 10);
    cout << "\n" << "Do While invertido" << "\n";
    c = 10;
    do
    {
        r = n * c;
        cout << n << " x " << c << " = " << r << endl;
        c--;
    }
    while (c >= 1);
    return 0;
}
```  
*Resultado:*  
![Tablas1](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Tablas1.png)  
![Tablas2](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Tablas2.png)  

***E04_CicloWhile:***  
*Programa:* 
```
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
          While mientras True
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    char opcion = 's';
    printf ("Tabla de multiplicar \n");
    while (opcion == 's')
    {
        // Entrada
        printf ("Numero: ");
        scanf ("%d", &n);
        
        // Proceso
        i = 1;
        do
        {
          printf ("%d x %d = %d \n", n, i, n * i);
          i++;
        } while (i <= 10);
        
        printf ("\nDesea otro <si/no> ");
        scanf ("%s", &opcion);
    }
    printf ("\n...Hecho");
    return 0;
}
```  
*Resultado:*  
![CicloWhile](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/CicloWhile.png) 

***E05_ForFor:*** 
*Programa:* 
``` 
/* 
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
            For anidados c:
            Tablas del 1 al 10
*/
#include <iostream>
using namespace std;

int main()
{
   int r = 0;
   for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            r = i * j;
            cout << i << " x " << j << " = " << r << endl;
        }
        cout << "\n";
    }
    return 0;
}
```  
*Resultado:*  
![ForFor1](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/ForFor1.png)  
![ForFor2](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/ForFor2.png)  
![ForFor3](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/ForFor3.png)  
![ForFor4](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/ForFor4.png)  

***E06_BreakContinue:***  
*Programa:* 
``` 
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Saber utilizar el Break Continue.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 5;
    for (int i = 0; i <= 10; i++){
        if (i == 6)
        {
            break;
        }
        else
        { 
            cout << i << endl;
        }
        cout << "numero " << i << endl;
    }
    cout << "...Hecho \n" << endl;
    return 0;
}
```  
*Resultado:*  
![BreakContinue](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/BreakContinue.png)  

***E07_Sumatoria:***  
*Programa:* 
``` 
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Realizar la sumatoria de los numeros del 1 al 10.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=1;
    int total=0;
    do
    {
        total+=n;
        n++;
    }while (n<=10);
    {
        cout<<"La sumatoria de los numeros del 1 al 10 es: "<<total<<endl;
    }
    
    return 0;
}
```  
*Resultado:*   
![Sumatoria](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Sumatoria.png)

***E08_DecimalABinario:***  
*Programa:* 
``` 
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Convertir un numero decimal a binario.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int decimal;
    int total;
    float residuo;
    string binario;

    cout << "Ingresa el numero decimal: " << endl;
    cin >> decimal;
    do
    {
        residuo = decimal % 2;
        decimal = decimal / 2;
        if (residuo == 0)
        {
            binario = '0' + binario;
        }
        else
        {
            binario = '1' +  binario;
        }
        total = total + 1;

    } while (total <= 7);
    cout << binario << endl;
    return 0;
}
```  
*Resultado:*   
![DecimalABinario](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/DecimalABinario.png)

***E09_Factorial:***  
*Programa:* 
``` 

```  
*Resultado:*   
![Factorial](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Factorial.png)  

***E10_UPA:***  
*Programa:* 
``` 
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Mostrar al usuario la palabra "UPA" por medio de cadenas.
*/

#include <iostream>
using namespace std;
int main ()
{
    string cadena;
    cadena = cadena + "U";
    cadena = cadena + "P";
    cadena = cadena + "A";
    cout << cadena << endl; //UP
    return 0;
}
```  
*Resultado:*   
![UPA](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/UPA.png)  

***E11_Cadenas:***  
*Programa:* 
``` 

```  
*Resultado:*   
![Cadenas](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Cadenas.png)  

***E12_SwitchCase:***  
*Programa:* 
``` 
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Implementar el Switch Case en operaciones basicas.
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 6, b = 0;
    double r;
    int opcion = 4;

    cout << "[1] Suma" << endl << "[2] Resta" << endl << "[3] Multiplicacion" << endl << "[4] Division" << endl;
    cout << "Ingrese un cero si desea salirse" << endl;
    cout << "Que operacion desea realizar: ";
    cin >> opcion;
    while (opcion != 0)
    {
        switch (opcion)
        {
        case 1:
            cout << "Suma" << endl;
            break;
        case 2:
            cout << "Resta" << endl;
            break;
        case 3:
            cout << "Multiplicacion" << endl;
            break;
        case 4:
            cout << "Division" << endl;
            if (b != 0)
            {
                r = a / b;
                cout << r << endl;
            }
            else
            {
                cout << "Division invalida" << endl;
            }
            break;
        default:
            cout << "Opcion Invalida" << endl;
            break;
        }
    cout << endl;
    cout << "[1] Suma" << endl << "[2] Resta" << endl << "[3] Multiplicacion" << endl << "[4] Division" << endl;
    cout << "Ingrese un cero si desea salirse" << endl;
    cout << "Que operacion desea realizar: ";
    cin >> opcion;
    }
    return 0;
}
```  
*Resultado:*   
![SwitchCase](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/SwitchCase.png)  

***E13_Funciones:***  
*Programa:* 
``` 

```  
*Resultado:*   
![Funciones](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Funciones.png)  

## *De tarea:*  
***T01_Empleados:***  
*Programa:* 
``` 
/* 
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
            Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento así como la cantidad de dinero que recibirá el usuario.
*/

#include <iostream>
using namespace std;

int main ()
{
    double p;
    int dinero = 2400;
    int r;
    cout << "Indique su puntuacion: ";
    cin >> p;
    if (p == 0.0 || p == 0.4 || p >= 0.6)
    {
        if (p == 0.0)
    {
        cout << "Inaceptable :(";
        r = dinero * p;
        cout << "\nDinero recibido: " << r;
    }
    else if (p == 0.4)
    {
        cout << "Aceptable";
        r = dinero * p;
        cout << "\nDinero recibido: " << r;
    }
    else if (p >= 0.6)
    {
        cout << "Meritorio :)";
        r = dinero * p;
        cout << "\nDinero recibido: " << r;
    }
    }
    else 
    {
        cout << "Dato invalido :(";
    }
    return 0;
}
```  
*Resultado:*  
![Empleados](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Empleados.png) 

***T02_SalaDeJuegos:***  
*Programa:* 
``` 
/* 
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
            Preguntar al usuario la edad del cliente y mostrar el precio de la entrada
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
```  
*Resultado:*  
![SalaDeJuegos](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/SalaDeJuegos.png)  

***T03_Pizzería:***  
*Programa:* 
``` 
/* 
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
            Preguntar al usuario tipo de pizza que quiere y, en función a su respuesta, mostrar el menú de los ingredientes disponibles
            Solo puede elegir un tipo de ingrediente 
            Mostrar al final el tipo de pizza y los ingredientes
*/
#include <iostream>
using namespace std;

int main ()
{
    string pizza;
    string ingrediente;
    cout << "Pizzeria Bella Napoli";
    cout << "\nQue tipo de pizza desea? <Vegetariana/Normal>\n";
    cin >> pizza;
    if (pizza == "Vegetariana" || pizza == "Normal")
    {
        cout << "Solo se permite un ingrediente (la mozzarella y el tomate vienen ya incluidos)\n";
        if (pizza == "Vegetariana")
        {
            cout << "Ingredientes disponibles:\n" << "Pimiento\n" << "Tofu\n" << "Ingrese el nombre del ingrediente que desea: ";
            cin >> ingrediente;
        }
        else if (pizza == "Normal")
        {
            cout << "Ingredientes disponibles:\n" << "Peperoni\n" << "Jamon\n" << "Salmon\n" << "Ingrese el nombre del ingrediente que desea: ";
            cin >> ingrediente;
        }
    }
    if (ingrediente == "Pimiento" || ingrediente == "Tofu" || ingrediente == "Peperoni" || ingrediente == "Jamon" || ingrediente == "Salmon")
    {
        cout << "Tipo de pizza: " << pizza;
        cout << "\nIngredientes: " << ingrediente << ", Mozzarella y Tomate" << "\nGracias por su visita! En un momento estara lista :)";                
    }
    else
    {
        cout << "Dato invalido";
    }
    return 0;
}
```  
*Resultado:*  
![Pizzería](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Pizzería.png)  

***T04_Temperaturas:***  
*Programa:* 
``` 
/* 
Alumna: Nelly Esther Espinoza Huerta.

Objetivo: 
            Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas baja y la mas alta.
*/
#include <iostream>
using namespace std;

int main ()
{
    int temperatura, mayor, menor;
    float sumatoria = 0;
    for (int i = 1; i <= 6; i++)
    {
        cout << "Ingrese la temperatura numero " << i << ": " << endl;
        cin >> temperatura;
        sumatoria = sumatoria + temperatura;
        if (i == 1)
        {
            mayor = temperatura;
            menor = temperatura;
        }
        else
        {
            if (temperatura > mayor)
            {
                mayor = temperatura;
            }
            else
            {
                if ( temperatura < menor)
                {
                    menor = temperatura;
                }
            }
        }
    }
    cout << "El promedio de las seis temperaturas es: " << (sumatoria) / 6;
    cout << "\nLa temperatura mas elevada fue: " << mayor;
    cout << "\nLa temperatura mas baja fue: " << menor;
    return 0;
}
```  
*Resultado:*  
![Temperaturas](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Temperaturas.png)  

***T05_Factura:***  
*Programa:* 
``` 
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
```  
*Resultado:*  
![Factura](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/Factura.png)  

***T06_BinarioADecimal:***  
*Programa:* 
``` 
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
```  
*Resultado:*  
![BinarioADecimal](https://github.com/UP210537/UP210537_CPP/blob/master/U2/Imagenes/BinarioADecimal.png)  