#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int numero;
int main()
{
    cout<<"Ingresar un numero: ";
    cin>>numero;

    if (numero==1)
    {
        cout<<" Lunes";
    }
    else if (numero==2)
    {
        cout<<" Martes";
    }
    else if (numero==3)
    {
        cout<<" Miercoles";
    }
    else if (numero==4)
    {
        cout<<" Jueves";
    }
    else if (numero==5)
    {
        cout<<" Viernes";
    }
    else if (numero==6)
    {
        cout<<" Sabado";
    }
    else
    {
        cout<<" Domingo";
    }
    cout<<"\n";
    system("PAUSE");
}
