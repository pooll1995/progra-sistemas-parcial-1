#include <iostream>
// ingresar numero divisible entre 5 mayor a 100, luego preguntar si desea continuar, al final el promedio de los numeros,
//validar con el ciclo do while la respuesta
using namespace std;
int num, prom, suma=0, c=0;
char resp;
int main()
{
    do{
    do{
    cout<<"Ingrese un Numero Div entre 5 Mayor a 100...> ";
    cin>>num;
    }while(!((num%5!=0) and (num>100)));
    suma+=num;
    do
    {
        cout<<"Desea Continuar: ";
        cin>>resp;
        resp=toupper(resp);
    }while((resp!='S') and (resp!='N'));
    c++;
    }while (resp!='N');
    prom=suma/c;
    cout<<"El Promedio es: "<<prom<<"\n";


}
