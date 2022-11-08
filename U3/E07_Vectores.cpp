#include <iostream>
using namespace std;

int  menorV(int x[], int N)
{
    int menor = x[0];
    for (int i = 0; i <= N ; i++) // N porque me va diciendo el tamaño
    {
        if (x[i] < menor)
        {
            menor = x[i];
        }
        
    }
    return menor;
}

int mayor2 (int x, int y)
{
    int mayor;
    mayor = (x > y) ? x : y; //Lo que ponga dentro... Pasando el signo ... si x > y entonces x (True). Si x no > y entonces y (False) True : False If ternario
    return mayor;
}


int main (int argc, char const *argv[])
{
    int n = 5;
    int calificaciones[] = {10,9,8,7,6};
  

    int menor = menorV(calificaciones, 5);
    cout << "Menor =  " << menor << endl;
    cout << "Mayor2 = " << mayor2 << endl;
    cout << "... Hecho" << endl;


    /*
    
    int calificaciones[5]; // Indica el tamaño del vector
    calificaciones[0] = 10; // Meterlo en casillas.
    calificaciones[1] = 9;  // Cuando tu capturas un dato y lo vas poniendo en su posicion.
    calificaciones[2] = 8;  // Se usa si no conoces los datos significa que los vas a capturar.
    calificaciones[3] = 7;
    calificaciones[4] = 6;  
    
    int cal2[] = {10,9,8,7,6}; // No es necesario ponerle el numero total de los valores que necesitas. Lo pone en "automatico" el sistema
    int n = 5;
    double total = 0;
    // int meses[] = {0,31,28,31 ..., 31}; // Como esta en 0 ya no causa molestia la referencia del mes, si empieza en 0 o 1
    for (int i = 0; i < n; i++)
    {
        total += cal2[i]; // total = total + cal2[i]>>"+=" es sumatoria de todos los valores

    }
    double promedio = total / n;
    cout << total << endl;
    cout << promedio << endl;
    */
    return 0;
}
