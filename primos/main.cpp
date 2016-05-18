#include <iostream>

using namespace std;
int i, a, k;
int main()
{
    for (k=1;k<=100;k++)
    {a=0;
    for (i=1;i<=k;i++)
    {
        if (k%i==0)
            a++;
    }
    if(a==2)
    {
        cout<<"Numero Primo: "<<k<<"\n";
    }
    }
}
