#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
char resp;
int turno, horas,i, sumahoras, total, pxh, mayor;
int main()
{do{
    do{
   cout<<"Ingresar turno 1,2,3: ";
   cin>>turno;
    }while((turno !=1) and (turno!=2) and (turno!=3));
    sumahoras=0;
    for(i=1;i<=5;i++)
    {
        cout<<"Horas del dia "<<i<<": ";
        cin>>horas;
        sumahoras+=horas;
    }
    switch (turno)
    {
    case 1:
        pxh=100;
        break;
    case 2:
        pxh=150;
        break;
    default:
        pxh=200;
        break;
    }
    total=sumahoras*pxh;
    cout<<"Pago total de horas es: "<<total<<"\n";
    if (mayor<total)
        mayor=total;
    do{
        cout<<"Desea Continuar: ";
        cin>>resp;
      }while((resp!='S')and (resp!='N'));

    }while (resp!='N');
}
