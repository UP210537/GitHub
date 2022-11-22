// Son de tarea
// Deslgloce de pesitos
// Desviacion poblacional
// Euler (Repaso para metodos numericos)
// Numeros arabicos (normales) a romanos (con vectores) del rango del 1 al 3999

#include <iostream>
#include <time.h>
using namespace std;

#define F 2
#define C 3

int main (int argc, char const *argv[])
{
    srand(time(NULL)); //Generar una semilla, sino pongo esta instruccion el programa generará los mismos numeros aleatorios
    int n; 
    
    int matriz [F][C];
    int matrizT [C][F];

    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            n = 21+rand()%(10); // Numeros del 21 al 30.
            matriz[i][j] = n;
            cout << matriz[i][j] << "\t";
            matrizT[j][i] = matriz[i][j]; // Para la transpuesta
        }
        cout << endl;
    }
    
    // Transpuesta
    cout << "Transpuesta c:" << endl; 
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < F; j++)
        {
            cout << matrizT[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << n << endl;
    cout << "... Hecho" << endl;
    return 0;
}
// Generar numeros aleatorios sin repetir