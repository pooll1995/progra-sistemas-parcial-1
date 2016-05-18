#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int num;
int main()
{
    srand(time(0));
    contador=0;

        while (contador<10)
    {
        numero=1+rand()%(100-1);
        suma+=numero;
        contador++;
}
