// cambia de minuscula a mayuscula
#include <iostream>
using namespace std;

string camello(string x)
{
    int lon = x.length();
    for (int i = 0; i < lon; i++)
    {
        if (islower(x[i]))
        {
            x[i] = toupper(x[i]);
        }
        else
        {
            x[i] = tolower(x[i]);
        }
    }
    return x;
}

char *camelloC(char *x)
{
    int i = 0;
    while (x[i] != '\0')
    {
        if (islower(x[i]))
        {
            x[i] = toupper(x[i]);
        }
        else
        {
            x[i] = tolower(x[i]);
        }
        cout << x[i] << " ";
        i++;
    }
    return x;
}
int main()
{
    /*
    string res = camello ("Upa");
    cout << res << endl;
    */

    /*
    char texto [20] = "UnI";
    char* txt; // * = Apuntador.
    txt = camelloC(texto);
    cout << " -> " << txt << endl;
    */
}
// Apuntador: Apunta a donde esta ubicado el vector.