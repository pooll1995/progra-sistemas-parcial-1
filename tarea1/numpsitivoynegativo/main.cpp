#include <iostream>
#include <stdlib.h>

using namespace std;
int numero;

int main()
{
    cout<<"Ingresar un numero ";
    cin>> numero;

    if (numero>0)
    {
        cout<<" Es Positivo";
    }
    else if (numero<0)
    {
        cout<<" Es Negativo";
    }
    else
    {
        cout<<" Es Cero";
    }
    cout<<"/n";
       system("PAUSE");
}
