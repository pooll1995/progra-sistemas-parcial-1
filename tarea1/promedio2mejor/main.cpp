#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int n1, n2, n3, prom;
int main()
{
    cout<<"Ingrese la Primer nota: ";
    cin>>n1;

    cout<<"Ingrese la Segunda nota: ";
    cin>>n2;

    cout<<"Ingrese la Tercer nota: ";
    cin>>n3;

    if ((n1>n3) and (n2>n3))
    {
    prom=(n1+n2)/2;
    cout<<"Su promedio se de: "<<prom;
    }

    else if ((n1>n2) and (n3>n2))
    {
    prom=(n1+n3)/2;
    cout<<"Su promedio se de: "<<prom;
    }

    else if ((n2>n1) and (n3>n1))
    {
    prom=(n2+n3)/2;
    cout<<"Su promedio se de: "<<prom;
    }
    cout<<"\n";
    system("PAUSE");
}
