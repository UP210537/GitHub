/* 
Objetivo: Preguntar al usuario tipo de pizza que quiere y, en función a su respuesta, mostrar el menú de los ingredientes disponibles
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
