#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int client, cant, precio,subt, total, desc;
int main()
{
    cout<<"Cual es el tipo de Cliente? ";
    cin>>client;

    cout<<"Ingrese la cantidad de Producto: ";
    cin>>cant;

    cout<<"Ingrese el Precio del Produncto: ";
    cin>>precio;

    subt=cant*precio;

    cout<<"El subtotal es de: "<<subt<<"LPS";

    if (client==1)
       {
           desc=subt*7/100;
        cout<<"\nEl descuento es de: "<<desc<<"LPS";
       }
    else if (client==2)
         {
        desc=subt*8/100;
        cout<<"\nEl descuento es de: "<<desc<<"LPS";
         }
    else if (client==3)
         {
        desc=subt*10/100;
        cout<<"\nEl descuento es de: "<<desc<<"LPS";
         }
    else
        {
        cout<<"\nEl cliente no tiene descuento";
        }

    total=subt-desc;
{
    cout<<"\nEl total a pagar es de: "<<total<<"LPS";
}
    cout<<"\n";
    system("PAUSE");
}



/*Se ingresa el tipo de cliente 1,2,3, luego la cantidad de producto, el precio y calcular el subtotal
,descuento usando la siguiente tabla
Tipo de cliente descuento
1 7-%
2 8%
3 10%
Luego el total a pagar y deberá de presentar los datos.*/

