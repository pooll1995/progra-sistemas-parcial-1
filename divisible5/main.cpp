#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int num;
int main()
{
    cout <<"Ingrese un Numero: ";
    cin>>num;
    if (num%5==0)
    {
        cout<< "El numero ingresado es divisible entre 5 ";
    }
    else
    {
        cout<< "El numero ingresado no es divisible entre 5 ";
    }
    cout<<"\n";
    system("PAUSE");
}
