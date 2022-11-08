#include <iostream>
using namespace std;

/* void imprimirA(int A[][], int f, int c) // [f][c]
{
    cout << "Matriz A" << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; i < c; j++)
        {
            
        }
        
    }
    
}
*/
int main ()
{
    int f = 2, c = 3;
    int matriz[f][c];
    int contador = 1;
    for (int i = 0; i <= f; i++)
    {
        for (int j = 0; i <= c; i++)
        {
            matriz[i][j] = contador;
            contador++;
        }
        
    } 

    //Imprimir matriz
    for (int i = 0; i <= f; i++)
    {
        for (int j = 0; i <= c; i++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    } 
    return 0;
}
