#include <iostream>
using namespace std;

int main()
{
    string cadena = "Universidad";
    char texto[30] = "PoliTecnicA";
    int i = 0;
    int Vocal = 0;
    int longitud = cadena.length();
    for (int i = 0; i < longitud; i++)
    {
        cout << cadena[i] << " ";
    }
//caracter comilla simple
    i = 0;
    while (texto[i] != '\0')
    {
        if (texto[i] == 'i' || texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
        {
            Vocal++;
        }
        cout << texto[i] << " ";
        i++;
    }
    cout << "Vocales" << Vocal << endl;

    for (int i = 0; i < 30; i++)
    {
        cout << texto[i] << " ";
    }
    /*
    if(isalpha(texto[0]))
    {

    }
    //si es alfabeto
    isdigit; //digito
    isalnum; //alfanumérico
    isspace; //
    */
}