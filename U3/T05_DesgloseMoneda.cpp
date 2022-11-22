#include<iostream>

using namespace std;

int monedas (int cantidad)
{
    int monedas;
    cantidad = monedas/1000;
    monedas %= 1000; 
    return monedas;
}
int main()
{
    int cantidad;
    cout << "Desgloce de monedas" << "\nIntroduzca la cantidad que desea analizar:" << endl;
    cin >> cantidad;
}