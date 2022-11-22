#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "sida"; // 
    /* 
    atributos = Es una variable (o propiedades) ... Métodos lo tienen cualquiera pero unos mejor q otros
    Atributos no lo llevan
    Metodos = llevan paréntesis
    Cuando aparece una cajita mientras buscas la funcion, es porque es un método. Se pone un punto y aparece todos los métodos
    */
    string texto = "Universidad UPA"; // c1
                //  012345678910
    string texto2("HolA");

    cout << "Contenido:     " << texto << endl;
    cout << "length:        " << texto.length() << endl;
    cout << "compare:       " << texto.compare("universidad") << endl;   // 0 -> c1 = c2  ///  -1 -> c1 < c2  ///  1 -> c1 > c2
    cout << "find:          " << texto.find(a) << endl;                 // Regresa la posicion de donde se encuentra "sida"
    cout << "substr:        " << texto.substr(6,4) << endl;            // Regresa substring
    cout << "find_last:     " << texto.find_last_of("i") << endl;     // Regresa la posición
    cout << "replace:       " << texto.replace(6,5, "vih") << endl;  
    texto = texto + ".";
    cout << "Concatenar:    " << texto << endl;
    texto.clear();
    cout << "Clear:         " << texto << endl;
    texto.swap(texto2);
    cout << "Swap:          " << texto << endl;

    system("pause");
    return 0;
}