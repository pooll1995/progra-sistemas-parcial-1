#include <iostream>
#include <time.h>
using namespace std;

int main()
{
  int cont = 1;
  int primCount = 0;

    while(cont<101){


        for(int i=1; i<(cont+1);i++){
            if(cont%i==0){
                primCount++;
            }
        }
        if(primCount <=2)
                cout << cont <<  " : es primo "<<"\n";
                 primCount = 0;
            }else{
                primCount = 0;
            }

    cont++;
    }
    return 0;
}
