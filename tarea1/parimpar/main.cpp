#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int num;
int main()
{
    cout<<"Ingrese un numero: ";
    cin>>num;
    if(num<0)
    num*=-1;
    if (num%2==0)
        cout<<"El numero es par";
    else
        cout<<"El numero es Impar";
    cout<<"\n";
    system("PAUSE");
}
