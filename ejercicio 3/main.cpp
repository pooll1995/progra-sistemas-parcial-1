#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int numero, i;
    for(i=1;i<=10;i++)
    {
     do{
        numero=1+rand()%(100-1);
       }while(numero%2!=0);
       cout<<i<<"-Numero Generado: "<<numero<<"\n";


    }
}
