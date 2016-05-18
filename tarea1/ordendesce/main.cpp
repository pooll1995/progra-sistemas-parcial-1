#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int n1, n2, n3;
int main()
{
    cout<<"Ingrese su primer numero: ";
    cin>>n1;

    cout<<"Ingrese su segundo numero: ";
    cin>>n2;

    cout<<"Ingrese Su tercer numero: ";
    cin>>n3;

    if ((n1>n2) and (n2>n3))
        {
            cout<<"El orden descendente de los numero es: "<<n1<<", "<<n2<<", "<<n3;
        }

    else if ((n1>n2)and (n3>n2))
    {
        cout<<"El orden descendente de los numero es: "<<n3<<", "<<n1<<", "<<n2;
    }

     else if ((n3>n1)and (n3>n2))
    {
        cout<<"El orden descendente de los numero es: "<<n3<<", "<<n2<<", "<<n1;
    }
     else if ((n3>n1)and (n2>n3))
    {
        cout<<"El orden descendente de los numero es: "<<n2<<", "<<n3<<", "<<n1;
    }
    cout<<"\n";
    system("PAUSE");

}
