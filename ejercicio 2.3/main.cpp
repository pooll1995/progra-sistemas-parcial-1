#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*-Generar un numero aleatorio que este entre 1-500 y adem�s que sea primo, se presenta el
n�mero, la generaci�n del numero s deber� de validar usando do/while.
Luego preguntar si desea continuar usando do/while, al final del ciclo presentar el promedio de
los n�meros ingresados y cu�l fue el n�mero mayor.*/
int main()
{  srand(time(0));
   char resp;
   int numero, mayor=0;
   do
  {
   numero= rand () % (500);
   cout<<"Numero: "<<numero<<"\n";
   if (numero>mayor)
    mayor=numero;
   do
      {
          cout<<"desea continuar: ";
          cin>>resp;
          resp=toupper(resp);
      } while ((resp!='S') and (resp!='N'));

    }while ((resp!='N'));
    cout<<"El numero mayor es: "<<mayor<<"\n";
}
