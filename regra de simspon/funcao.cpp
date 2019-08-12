/**
Biblioteca para calacular a regra de simpson
Nome: Victor Propheta Erbano
RGM:  026097
*/

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "funcao.h"
#include "derivada.h"

using namespace std;

/**Integral para Primeira função*/
void primeira_func()
{
    int i;
    long double a,b,d,n,I=0,J=0,A,W=0,E=0,x=0;
    system("cls");
    cout<<"Entre com o limite inferior "<<endl;
    cin>>a;
    cout<<"Entre com o limite superior "<<endl;
    cin>>b;
    cout<<"Entre com o numero de intervalos : "<<endl;
    cin>>n;
    /**Calcula o h*/
    d =(b-a)/n;

    if(a!=b)
    {
        cout<<"O h e:"<<endl;
        cout<<d<<endl;
        cout<<endl;

        cout<<"Os n's sao:"<<endl;
        cout<<a<<endl;
        for(i=0;i<n;i++)
        {
            x= x + d;
            cout<<x+a<<endl;
        }
        cout<<endl;

        ///Passos para resolver a regra de Simpson's 1/3
        /**Impar*/
        for(i=1;i<n;i++)
        {
            if((i%2)!=0)
            {
                I=I+fir_f(a+(i*d));
            }
        }
        /**Par*/
        for(i=2;i<n-1;i++)
        {
            if((i%2)==0)
            {
                J=J+fir_f(a+(i*d));
            }
        }

        A =(d/3)*(fir_f(a)+(4*I)+(2*J)+fir_f(b));

        /**Imprimindo o valor da integral*/
        cout<<"O valor da intergral e: "<<endl;
        cout<<A<<endl;

        /**Calculando o Erro*/
        W = b-a;
        E = -((pow(W,5)/(180*(pow(n,4))))*fir_j(a));
        E = E *-1;
        /**Imprimindo o erro*/
        cout<<"O erro e : "<<endl;
        cout<<E<<endl;
    }
    else
    {
        cout<<"Entre com valores do limite inferior e superior diferente"<<endl;
        cout<<endl;
    }
    system("pause");
}

/**Integral para Segunda função*/
void segunda_func()
{
    int i;
    long double a,b,d,n,I=0,J=0,A,W=0,E=0,x=0;
    system("cls");
    cout<<"Entre com o limite inferior "<<endl;
    cin>>a;
    cout<<"Entre com o limite superior "<<endl;
    cin>>b;
    cout<<"Entre com o numero de intervalos : "<<endl;
    cin>>n;
    /**Calcula o h*/
    d =(b-a)/n;

    if(a!=b)
    {
        cout<<"O h e: "<<endl;
        cout<<d<<endl;
        cout<<endl;

            cout<<"Os n's sao:"<<endl;
            cout<<a<<endl;
            for(i=0;i<n;i++)
            {
                x= x + d;
                cout<<x+a<<endl;
            }
            cout<<endl;

        ///Passos para resolver a regra de Simpson's 1/3
        /**Impar*/
        for(i=1;i<n;i++)
        {
            if((i%2)!=0)
            {
                I=I+sec_f(a+(i*d));
            }
        }
        /**Par*/
        for(i=2;i<n-1;i++)
        {
            if((i%2)==0)
            {
                J=J+sec_f(a+(i*d));
            }
        }

        A =(d/3)*(sec_f(a)+(4*I)+(2*J)+sec_f(b));

        /**Imprimindo o valor da integral*/
        cout<<"O valor da intergral e: "<<endl;
        cout<<A<<endl;

        /**Calculando o Erro*/
        W = b-a;
        E = -((pow(W,5)/(180*(pow(n,4))))*sec_j(a));
        E = E *-1;

        /**Imprimindo o erro*/
        cout<<"O erro e : "<<endl;
        cout<<E<<endl;
    }
    else
    {
        cout<<"Entre com valores do limite inferior e superior diferente"<<endl;
        cout<<endl;
    }
    system("pause");
}

/**Integral para Terceira  função*/
void terceira_func()
{
    int i;
    long double a,b,d,n,I=0,J=0,A,W=0,E=0,x=0;
    system("cls");
    cout<<"Entre com o limite inferior "<<endl;
    cin>>a;
    cout<<"Entre com o limite superior "<<endl;
    cin>>b;
    cout<<"Entre com o numero de intervalos : "<<endl;
    cin>>n;
    /**Calcula o h*/
    d =(b-a)/n;

    if(a!=b)
    {
        cout<<"O h e: "<<endl;
        cout<<d<<endl;
        cout<<endl;

            cout<<"Os n's sao:"<<endl;
            cout<<a<<endl;
            for(i=0;i<n;i++)
            {
                x= x + d;
                cout<<x+a<<endl;
            }
            cout<<endl;

        ///Passos para resolver a regra de Simpson's 1/3
        /**Impar*/
        for(i=1;i<n;i++)
        {
            if((i%2)!=0)
            {
                I=I+ter_f(a+(i*d));
            }
        }
        /**Par*/
        for(i=2;i<n-1;i++)
        {
            if((i%2)==0)
            {
                J=J+ter_f(a+(i*d));
            }
        }

        A =(d/3)*(ter_f(a)+(4*I)+(2*J)+ter_f(b));

        /**Imprimindo o valor da integral*/
        cout<<"O valor da intergral e: "<<endl;
        cout<<A<<endl;

        /**Calculando o Erro*/
        W = b-a;
        E = -((pow(W,5)/(180*(pow(n,4))))*ter_j(a));
        E = E *-1;

        /**Imprimindo o erro*/
        cout<<"O erro e : "<<endl;
        cout<<E<<endl;
    }
    else
    {
        cout<<"Entre com valores do limite inferior e superior diferente"<<endl;
        cout<<endl;
    }
    system("pause");
}

/**Integral para Quarta função*/
void quarta_func()
{
    int i;
    long double a,b,d,n,I=0,J=0,A,W=0,E=0,x=0;
    system("cls");
    cout<<"Entre com o limite inferior "<<endl;
    cin>>a;
    cout<<"Entre com o limite superior "<<endl;
    cin>>b;
    cout<<"Entre com o numero de intervalos : "<<endl;
    cin>>n;
    /**Calcula o h*/
    d =(b-a)/n;

    if(a!=b)
    {
        cout<<"O h e: "<<endl;
        cout<<d<<endl;
        cout<<endl;

        cout<<"Os n's sao:"<<endl;
        cout<<a<<endl;
            for(i=0;i<n;i++)
            {
                x= x + d;
                cout<<x+a<<endl;
            }
        cout<<endl;

        ///Passos para resolver a regra de Simpson's 1/3
        /**Impar*/
        for(i=1;i<n;i++)
        {
            if((i%2)!=0)
            {
                I=I+qua_f(a+(i*d));
            }
        }
        /**Par*/
        for(i=2;i<n-1;i++)
        {
            if((i%2)==0)
            {
                J=J+qua_f(a+(i*d));
            }
        }

        A =(d/3)*(qua_f(a)+(4*I)+(2*J)+qua_f(b));

        /**Imprimindo o valor da integral*/
        cout<<"O valor da intergral e: "<<endl;
        cout<<A<<endl;

        /**Calculando o Erro*/
        W = b-a;
        E = -((pow(W,5)/(180*(pow(n,4))))*qua_j(a));
        E = E *-1;

        /**Imprimindo o erro*/
        cout<<"O erro e : "<<endl;
        cout<<E<<endl;
    }
    else
    {
        cout<<"Entre com valores do limite inferior e superior diferente"<<endl;
        cout<<endl;
    }
    system("pause");
}
