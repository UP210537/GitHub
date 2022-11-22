#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *apt; // No se sabe el tamaño, por eso el apuntador [1]
    char texto[100] = "UPA";
    strcat(texto, " la mejor"); //Nos sirve para hacer el RFC de las tareas [2] Concatena
    cout << texto << endl;
    
    strcpy(texto, "Universidad"); //Hace una asignacion
    cout << texto << endl;
    cout << strlen(texto) << endl; //Tamaño de la variable
    cout << strstr(texto, "sida") << endl; //Te permite buscar bajo toda una cadena, y te imprime lo que sigue despues de esa.
    cout << "--------------" << endl;

    /*apt = strchr(texto, ' ');
    strcat(texto, apt);
    cout << apt << endl; // Con apuntadores [1]
    cout << strchr(texto, ' ') << endl; //Apartir del espacio, imprime lo restante [2]
    */
   return 0;
}