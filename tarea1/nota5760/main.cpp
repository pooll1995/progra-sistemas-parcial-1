#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int nexam, nacum, ntotal;
int main()
{
    cout<<"Ingrese la nota Acumulativa: ";
    cin>>nacum;

    cout<<"Ingrese la nota de Examen: ";
    cin>>nexam;

    ntotal= nexam+nacum;

    if ((ntotal>=57) and (ntotal<=59))
        cout<<"la nota final es: 60";
    else
        cout<<" la nota final es: "<<ntotal;

    cout<<"\n";
    system("PAUSE");
}
