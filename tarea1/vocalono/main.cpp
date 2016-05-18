#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
char v;
int main()
{
    cout<<"Introduzca una letra: ";
    cin>>v;
    switch (v)
    {
    case 'a':
        cout<<"Es una Vocal.";
        break;
    case 'e':
        cout<<"Es una Vocal.";
        break;
    case 'i':
        cout<<"Es una Vocal.";
        break;
    case 'o':
        cout<<"Es una Vocal.";
        break;
    case 'u':
        cout<<"Es una Vocal.";
        break;
    default:
        cout<<"Es una consonante o un numero";
        break;
    }
    cout<<"\n";
    system("PAUSE");
}
