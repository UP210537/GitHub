#include <iostream>
#include <cmath>
using namespace std;

int suma(int x, int y)
{
    return(x+y);
}

double G2R (double a)
{
    double r;
    r = a*M_PI/180; //Para sacar radianes
    return r;
}

double seno(double a)
{
    double r;
    r = sin(G2R(a));
    return r; // return sin(G2R(a)); (otro modo)
}

bool esBisiesto(int year)
{
    bool r = true;
    r = year%400 == 0 || (year%4 == 0 && year%100 != 0); // No importan los parentesis por la gerarquía de operaciones
    return r;
}