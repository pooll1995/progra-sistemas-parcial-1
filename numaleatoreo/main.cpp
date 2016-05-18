#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{   srand(time(0));
    int i;
    int n, numero;
    numero= rand () % (100);
    cout<<"Valor de Numero " <<numero<<"\n";
    system("PAUSE");
    return 0;

}
//ingresar 3 numero y encontrar el numero mayor
