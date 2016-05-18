#include <iostream>

using namespace std;

void ingresar (int &n1, int &n2) // "&"signidica que va a ser de salida"
{
    cout<<"Ingresar n1..:";
    cin>>n1;
    cout<<"Ingresar n2..:";
    cin>>n2;

}
void presentar (int n1, int n2)
{
    cout<<"valor de n1..: "<<n1<<"\n";
    cout<<"valor de n2..: "<<n2<<"\n";
}
void calcular (int n1, int n2, int &suma)
{
    suma=n1+n2;
}
int mayor(int n1, int n2)
{
    if (n1>n2)
        return n1;
    else
        return n2;
}
int main()
{int n1, n2, suma, maxnumero;
   ingresar(n1, n2);
   presentar(n1,n2);
   calcular(n1,n2,suma);
   cout<<"suma fina es: "<<suma<<"\n";
   maxnumero=mayor(n1,n2);
   cout<<"El numero mayor es : "<<maxnumero<<"\n";

}
