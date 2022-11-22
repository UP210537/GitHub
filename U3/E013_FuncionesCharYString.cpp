#include <iostream>
// #include <string.h> // mas adaptado al c nativo
#include <cstring> // librerias mas adaptables al c++

using namespace std;

int main()
{
    char letra = 'A';
    char texto[20] = "uNi10veR20siDa41D";
    char texto2[] = {'A', 'D', 'I', 'O', 'S', '\0'};

    for (int i = 0; texto[i] != '\0'; i++) //Hata que el carecter sea diferente de nulo.
    {
        cout << texto[i] << " ";
    }
    
    cout << "\n" << "Sin vocales (Consonantes)" << endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] != 'a' && texto[i] != 'e' && texto[i] != 'i' && texto[i] != 'o' && texto[i] != 'u')
        cout << texto[i] << " ";
    }
    
    cout << "\n" << "Puras vocales" << endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u') 
        cout << texto[i] << " ";
    }
    
    cout << "\n" << "Digitos" << endl;    
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (isdigit(texto[i])) // Que imprima todo lo que es digito (comando) T or F
        cout << texto[i] << " ";

    }
    
    cout << "\n" << "Todo a mayusculas" << endl;    
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (towupper(texto[i]))
        cout << texto[i] << " ";

    }

    cout << "\n" << "Quitar numero y todo a mayusculas" << endl;    
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (islower(texto[i]))
        {
            texto[i] = toupper(texto[i]);
            cout << texto[i] << " ";   
        }

    }
    
    cout << "\n" << "Agregar texto" << endl;    
    strcat(texto, " la mejor"); //Concatenar (Texto orginalmente dice Universidad con los numeros y eso) La agrega al final de la cadena texto y la vuelve a dejar en texto
    cout << "\n" << texto;
    
    cout << strchr(texto, ' ') << endl; //Traer substring a partir del caracter qeu tu le pusiste. Te da todo lo que este hasta el espacio.
    cout << "\n" << "... Hecho" << endl;
    return 0;
}