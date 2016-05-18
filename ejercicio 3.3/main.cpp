#include <iostream>

using namespace std;
/*Presnetar las tablas de multiplicación del 1 al 5.
La tabla del 1, la tabla del 2, la tabla del 3, la tabla del 4, la tabla del 5.
Usar ciclos anidados , un ciclo for para las cinco tablas y por cada una de las tablas */
int numero1=1,numero2=2, numero3=3,numero4=4, numero5=5, n ;
int main()
{
    for( n=1;n<=12; n++)
    {
        cout<< n <<" x "<<numero1<< ": " << numero1*n<<endl;
    }
    cout<<"\n";
    for( n=1;n<=12; n++)
    {
        cout<< n <<" x "<<numero2<< ": " << numero2*n<<endl;
    }
    cout<<"\n";
    for( n=1;n<=12; n++)
    {
        cout<< n <<" x "<<numero3<< ": " << numero3*n<<endl;
    }
    cout<<"\n";
    for( n=1;n<=12; n++)
    {
        cout<< n <<" x "<<numero4<< ": " << numero4*n<<endl;
    }
    cout<<"\n";
    for( n=1;n<=12; n++)
    {
        cout<< n <<" x "<<numero5<< ": " << numero5*n<<endl;
    }
    cout<<"\n";

}
