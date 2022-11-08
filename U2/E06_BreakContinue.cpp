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