#include <iostream>

using namespace std;
int numero=345;
int n;
int main()
{
    cout<<"ingrese un numero: ";
    cin>>numero;
    while (numero<10)
    {
    n=numero % 10;
    }
    cout<<n<<"\n";
}
