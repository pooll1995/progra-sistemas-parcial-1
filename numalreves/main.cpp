#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int n1, n2;
int main()
{
    cout<<"Ingreses un numero de tres cifras: ";
    cin>>n1;
    n2=n1%1000;
    cout<<"el numero al reves es: "<<n2;
    cout<<"\n";
    system("PAUSE");

}
