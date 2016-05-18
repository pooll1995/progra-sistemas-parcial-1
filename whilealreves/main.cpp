#include <iostream>

using namespace std;
int digito, numero;
int main()
{
    cout<<"ingresar un numero: ";
    cin>>numero;
    cout<<"El numero al reves es: ";
    while (numero >0)
    {
        digito=numero%10;
        cout<<digito;
        numero=numero/10;
    }



}
