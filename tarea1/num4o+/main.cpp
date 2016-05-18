#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int num;
int main()
{
    cout<<"Ingrese el numero deseado: ";
    cin>>num;
    if (num<0)
        num *=(-1);
    if (num<=9)
        cout<<"**Tiene una Cifra**";
        else if (num<=99)
            cout<<"**Tiene Dos Cifras**";
        else if (num<=999)
            cout<<"**Tiene Tres Cifras**";
        else
            cout<<"**Tiene Cuatro o Mas de Cuatro Cifras**";
        cout<<"\n";
        system("PAUSE");
}
