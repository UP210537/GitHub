#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    int e;
    cout << "dime tu edad \n";
    cin >> e;
    if (e >= 1 && e <= 150)
    {
        if (e >= 1 && e <= 30)
        {
            printf("1er edad \n");
        }
        else if (e >= 31 && e <= 60)
        {
            printf("2da edad \n");
        }
        else if (e >= 61 && e <= 90)
        {
            printf("3er edad \n");
        }
        else if (e >= 91 && e<= 150)
        {
           printf("Horas Extras \n"); 
        }
    }
    else
        printf("dato invalido \n");

    return 0;
}