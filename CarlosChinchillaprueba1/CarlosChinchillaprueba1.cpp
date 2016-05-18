#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int numero, par, impar, mayor, digito;
int main()
{
    cout<<"Ingrese Un Numero: ";
    cin>>numero;
    while (numero >0)
    {
        digito= numero % 10;
        numero=numero/10;

    if (digito%2==0)
    {
        par+=1;
    }
    else
    {
        impar+=1;
    }
    if (digito>mayor)
        mayor=digito;
    }
    cout<<"Pares: ";
    cout<<par;
    cout<<"\n";
    cout<<"Impares: ";
    cout<<impar;
    cout<<"\n";
    cout<<"Mayor: ";
    cout<<mayor;
    cout<<"\n";
    system("PAUSE");

}
