#include <iostream>

using namespace std;
int numero1, n;
int main()
{
    cout<<"Ingresar la tabla de Multiplicacion: ";
    cin>>numero1;
    for( n=1;n<=10; n++)
    {
        cout<< n <<" x "<<numero1<< ": " << numero1*n<<endl;

    }
}
