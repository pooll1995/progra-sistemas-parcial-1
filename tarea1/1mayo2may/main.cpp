#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int n1, n2;
int main()
{
    cout<<"Ingrese el primer numero: ";
    cin>>n1;

    cout<<"Ingrese el segundo numero: ";
    cin>>n2;

    if (n1>n2)
       {
        cout<<"el nuevo orden de los numeros es: "<<n2<<", "<<n1;
       }
    else
    {
        cout<<"el orden de los numeros es: "<<n1<<", "<<n2;
    }
}
