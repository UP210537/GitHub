#include <iostream>
using namespace std;

int main (int argc, char const *argv[]);
{
    int n = 5;
    for (int i = 1; i <= 10; i++)
    {
        int r = n * i;
        cout << n << " x " << i << " = " << r << endl; //endl es para avanzar la línea
    }
    
    return 0;
}