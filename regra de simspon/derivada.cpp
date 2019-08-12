/**
Biblioteca para todas as funções e suas derivadas
Nome: Victor Propheta Erbano
RGM:  026097
*/

#include <cmath>
#include "derivada.h"

/**Primeira função*/
float fir_f(float(x))
{
    return (1/(pow(x,2)));
}

/**Primeira derivada*/
float fir_g(float(x))
{
    return (-2/pow(x,3));
}

/**Segunda derivada*/
float fir_h(float(x))
{
    return (6*pow(x,4));
}

/**Terceira derivada*/
float fir_i(float (x))
{
    return (-24/pow(x,5));
}

/**Quarta derivada da primeira função*/
float fir_j(float(x))
{
    return (120/pow(x,6));
}

/**Segunda função*/
float sec_f(float(x))
{
    return (pow(x,3)+pow(x,2)+ x + 1);
}

/**Primeira derivada*/
float sec_g(float(x))
{
    return (3*pow(x,2)+2*x + 1);
}

/**Segunda derivada*/
float sec_h(float(x))
{
    return (6*x+ 2);
}

/**Terceira derivada*/
float sec_i(float (x))
{
    return (6);
}

/**Quarta derivada da segunda função*/
float sec_j(float(x))
{
    return (0);
}

/**Terceira função*/
float ter_f(float(x))
{
    return (pow(sin((x+1)),2)*cos(pow(x,2)));
}

/**Quarta derivada da terceira função*/
float ter_j(float(x))
{
    return (32*pow(x,3)*(sin(pow(x,2)))*(pow(sin(x),2))+48*pow(x,2)*(x+1)*(sin(pow(x,2)))*(pow(sin(x),2))+16*pow(x,4)*(x+1)*(cos(pow(x,2)))*(pow(sin(x),2))-12*(x+1)*(cos(pow(x,2)))*(pow(sin(x),2))-48*x*(cos(pow(x,2)))*(pow(sin(x),2)));
}

/**Quarta função*/
double qua_f(double(x))
{
    double X= 2*x;
    return (exp(X));
}

/**Quarta derivada da quarta função*/
double qua_j(double(x))
{
    double X= 2*x;
    return (16*exp(X));
}
