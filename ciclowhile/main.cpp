#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int contador, suma, mayor, menor, cont50, suma50, prom50;
int numero;
int main()
{ srand(time(0));
    contador=0;
    suma=0;
    mayor=0;
    menor=100;
    cont50=0;
        while (contador<10)
    {
        numero=1+rand()%(100-1);
        suma+=numero;
        contador++;
        if (mayor<numero)
        {
            mayor=numero;
        }
        if  (numero<menor)
        {
            menor=numero;
        }
        if (numero>50)
        {
            cont50++;
            suma50+=numero;
        }
        cout<<contador<<" Numero: "<<numero<<"\n";
    }
    prom50=suma50/cont50;
    cout<<"El numero mayor es: "<<mayor<<"\n";
    cout<<"El numero menor es: "<<menor<<"\n";
    cout<<"La cantidad de numeros mayores a 50 son: "<<cont50<<"\n";
    cout<<"El promedio de los numeros es de: "<<prom50<<"\n";
    cout<<"La suma de todos es de :"<<suma<<"\n";
    cout<<"Final del Programa"<<"\n";
    cout<<"\n";
    system("PAUSE");
}
