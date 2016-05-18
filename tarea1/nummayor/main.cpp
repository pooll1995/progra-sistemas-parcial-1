#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int n1,n2,n3;
int main()
{
    cout<<"Ingresar Numero 1 >";
    cin>>n1;

    cout<<"Ingresar Numero 2 >";
    cin>>n2;

    cout<<"Ingresar Numero 3 >";
    cin>>n3;

    if ((n1>n2) and (n1>n3))
    {
        cout<<"Numero Mayor es " <<n1 ;
    }
    else if (n2>n3)
    {
        cout<<"Numero Mayor es " <<n2 ;
    }
    else
    {
        cout<<"Numero Mayor es " << n3 ;
    }

}
