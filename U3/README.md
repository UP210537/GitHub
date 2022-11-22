# Unit 3
>## *knowing functions, vectors and matrices.*   

<center>  

![Soobin](https://i.pinimg.com/236x/6b/08/eb/6b08eba1fa436d4229fcf17a2a1de3f5.jpg)

</center>

## *Functions:*.
So far we have written all programs in a single function called "main()". However, this is not always possible, let alone practical.

Normally a program is structured in such a way that "main()" calls other functions that perform tasks and which in turn can call other functions. 

The functions can be conventional mathematical functions or perform any other task, such as printing results.
* A function can be of type void, which means that it does not return any value. that does not return any value.

## *Vectors:*
A vector is simply defined as a variable of the desired type with the dimension in square brackets.
* We can access the elements of the container vector using an index and the indexing operator "[]".

## *Matrices:*
An array can be be initialized in its declaration. You can put all its elements between single braces. In which case the elements are read by rows, and if any are missing they are taken as 0.
* In fact, a matrix is nothing more than a series of vectors contained one in the other (or others), that is, a matrix is a vector whose positions are other vectors.

<center>  

![Soobin](https://i.pinimg.com/236x/2a/69/6f/2a696fa54595138eedc0ef98fb327b62.jpg)

</center>

>## *Exercises performed in this unit:*  
## *For homework:*  
***T01_Bisection:***  
*Syllabus:* 
```
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
```
*Result:*  
![Biseccion](https://github.com/UP210537/UP210537_CPP/blob/master/U3/Imagenes/Biseccion.png)

***T02_LeapYear:***  
*Syllabus:* 
```
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Calcular el año bisiesto que pida el usuario con funciones.
*/
#include<iostream>
#include"Libro.h"

using namespace std;

int main()
{
    int y;
    cout << "El año es bisiesto o no?" << endl;
    cout << "Ingrese el año de su preferencia:" << endl;
    cin >> y;
    y = esBisiesto(y);
    if (y == 1)
    cout << "El año es bisiesto";
    else
    cout << "El año no es bisiesto";
    return 0;
}
```
*Result:*  
![AñoBisiesto](https://github.com/UP210537/UP210537_CPP/blob/master/U3/Imagenes/AñoBisiesto.png)

***T03_Cosine:***  
*Syllabus:* 
```
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Conocer las funciones matematicas dentro de una librería.
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    short int i, j, terminos, expo = 0, signo = -1;
    float angulo;
    double resultado = 0, factorial = 1;
    cout << "Introduzca el angulo:" << endl;
    cin >> angulo;
    cout << "Introduzca el numero de terminos:" << endl;
    cin >> terminos;
    for(i = 0; i <= terminos; i++)
    {
        factorial = 1;
        for(j = 1; j <= expo; j++)
            factorial *= j;
            signo *= -1;
            resultado += signo * pow(angulo, expo) / factorial;
            cout << resultado << endl;
            expo = expo + 2;
    }
    cout << "El coseno de" << angulo << "es: " << resultado << endl;
    return 0;
}
```
*Result:*  
![Coseno](https://github.com/UP210537/UP210537_CPP/blob/master/U3/Imagenes/Coseno.png)

***T04_StandardDeviation:***  
*Syllabus:* 
```
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Realizar la desviacion estandar poblacional.
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    short int i, j, n;
    cout << "Introduzca el numero de elementos" << endl;
    cin >> n;
    float a[n];
    float suma = 0, media, mediana, desviacion = 0, aux;
    for(i = 0; i < n; i++)
    {
        cout << "A["<<i<<"]:" << endl;
        cin >> a[i];
        suma += a[i];
    }
    media = suma/n;
    for(j = 0; j < n; j++)
        for(i = 0; i < n; i++)
            if(a[i] > a[i+1]){
            aux = a[i];
            a[i] = a[i+1];
            a[i] = aux;}
    if ((n%2) == 1)
    mediana = a[n/2];
    else
    mediana = (a[n/2] + a[n/2-1])/2;
    aux = 0;
    for(i = 0; i < n; i++)
        aux = aux + pow(a[i] - media, 2);
        aux = aux/n;
        desviacion = sqrt(aux);
    cout << "La desviacion estandar poblacional es de: " << desviacion << endl;    
    return 0;
}
```
*Result:*  
![DesviacionEstandar](https://github.com/UP210537/UP210537_CPP/blob/master/U3/Imagenes/DesviacionEstandar.png)

***T05_Currencybreakdown:***  
*Syllabus:* 
```

```
*Result:*  
![DesgloseMoneda](https://github.com/UP210537/UP210537_CPP/blob/master/U3/Imagenes/DesgloseMoneda.png)

***T06_ArabictoRomanNumerals:***  
*Syllabus:* 
```

```
*Result:*  
![AtoR](https://github.com/UP210537/UP210537_CPP/blob/master/U3/Imagenes/AtoR.png)

***T07_RFC:***  
*Syllabus:* 
```
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Realizar la RFC con funciones char, etc.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string nombre="Carlos";
    string AP="";
    string AM="";
    string fe="";
    string rfc="";
    cout << "Nombre" << endl;
    cin >> nombre;
    cout << "Apellido Paterno" << endl;
    cin >> AP;
    cout << "Apellido Materno" << endl;
    cin >> AM;
    cout << "Fecha" << endl;
    cin >> fe;

    int v=nombre.length(); 
    int p=0;
    AP[0]=tolower(AP[0]);
    
    for (int i = 0; i < v && p<=2; i++)
    {
        if (AP[i]=='a' || AP[i]=='e' || AP[i]=='i' || AP[i]=='o' || AP[i]=='u' )
        {
            rfc=rfc+AP[i];
            p++;
        }  
    }
    AP[0]=toupper(AP[0]);

    int d1=fe.find_last_of("/");
    int d2=fe.find("/");
    rfc=rfc+AM[0]+nombre[0]+fe.substr(d1+1,4)+fe.substr(d2+1,2)+fe.substr(0,2);
    
    v=rfc.length();
    for (int i = 0; i < v; i++)
    {
        rfc[i]=toupper(rfc[i]);
    }
    cout<<nombre<<" RFC: "<<rfc;
    return 0;
}
```
*Result:*  
![RFC](https://github.com/UP210537/UP210537_CPP/blob/master/U3/Imagenes/RFC.png)

***T08_SortAVector:***  
*Syllabus:* 
```
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Investigar sobre cómo ordenar un vector con uno de los métodos que más nos guste.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int vector[] = {3, 2, 1, 5, 4};
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(vector[i] > vector[j])
            {
                int aux = vector[i];
                vector[i] = vector [j];
                vector[j] = aux;
            }
        }
    }
    printf ("Numeros acomodados del 1 al 5:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", vector[i]);
    }
    return 0;
}
/* Se utilizó el algoritmo de selección.
Este algoritmo se llama ordenamiento por selección porque 
selecciona repetidamente el siguiente elemento más bajo y 
lo intercambia a su lugar.

Consiste en encontrar el menor de todos los elementos del 
vector e intercambiarlo con el que está en la primera posición. 
Luego el segundo mas pequeño, y así sucesivamente hasta ordenarlo todo.
*/
```
*Result:*  
![VectorOrdenado](https://github.com/UP210537/UP210537_CPP/blob/master/U3/Imagenes/VectorOrdenado.png)

***T09_RecursiveFunction:***  
*Syllabus:* 
```
/*
Alumna: Nelly Esther Espinoza Huerta.

Objetivo:
            Factorial utilizando el método recursivo..
*/
#include<iostream>

using namespace std;

int factorial(int n)
{
    if(n < 2)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int numero;
    cout << "Introduce un numero:" << endl;
    cin >> numero;
    cout << "El resultado es: " << factorial(numero);
    return 0;
}
```
*Result:*  
![FuncionRecursiva](https://github.com/UP210537/UP210537_CPP/blob/master/U3/Imagenes/FuncionRecursiva.png)