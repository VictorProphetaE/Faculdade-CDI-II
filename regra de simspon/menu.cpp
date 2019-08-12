/**
Biblioteca para o menu somente
Nome: Victor Propheta Erbano
RGM:  026097
*/

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "menu.h"
#include "funcao.h"
#include "derivada.h"

using namespace std;

/**Menu de selecionar*/
int selec()
{
    int option = 0,opt=0;

    system("cls");
    cout<<" Menu da Entrada de Dados"<<endl;
    cout<<" 1 - Dado f(x)= 1/x^2 "<<endl;
    cout<<" 2 - Dado f(x)= x^3 + x^2 + x + 1 "<<endl;
    cout<<" 3 - Dado f(x)= sen^2(x+1)*cos(x^2)"<<endl;
    cout<<" 4 - Dado f(x)= e^(2*x)"<<endl;
    cout<<" 5 - Sair"<<endl;
    cout<<"  Opcao:  "<<endl;
    cin>> option;
    switch (option)
    {
        case 1:
            do{
            primeira_func();
            system("cls");
            cout<<"Deseja continuar com esta funcao"<<endl;
            cout<<"1-sim"<<endl;
            cout<<"2-nao"<<endl;
            cin>>opt;
            }
            while(opt==1);
        break;
        case 2:
            do{
            segunda_func();
            system("cls");
            cout<<"Deseja continuar com esta funcao"<<endl;
            cout<<"1-sim"<<endl;
            cout<<"2-nao"<<endl;
            cin>>opt;
            }
            while(opt==1);
        break;
        case 3:
            do{
            terceira_func();
            system("cls");
            cout<<"Deseja continuar com esta funcao"<<endl;
            cout<<"1-sim"<<endl;
            cout<<"2-nao"<<endl;
            cin>>opt;
            }
            while(opt==1);
        break;
        case 4:
            do{
            quarta_func();
            system("cls");
            cout<<"Deseja continuar com esta funcao"<<endl;
            cout<<"1-sim"<<endl;
            cout<<"2-nao"<<endl;
            cin>>opt;
            }
            while(opt==1);
        break;
        case 5:
            system("cls");
        break;
        default:
            system("cls");
            cout<<"Opcao  invalida!"<<endl;
            system("pause");
        break;
    }
return option;
}

