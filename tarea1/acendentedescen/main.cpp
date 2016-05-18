#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int n1, n2, n3;
int main()
{
    cout<<" Ingrese el primer numero: ";
    cin>>n1;

    cout<<" Ingrese el segundo numero: ";
    cin>>n2;

    cout<<" Ingrese el tercer numero: ";
    cin>>n3;

    if ((n1>n2) and (n2>n3))
        cout<<"Numeros ordenados de manera descendente";
    else if ((n1<n2) and (n2<n3))
        cout<<"Numeros ordenados de manera acendente";
    else
        cout<<"Numeros en desorden";

    cout<<"\n";
    system("PAUSE");

}
