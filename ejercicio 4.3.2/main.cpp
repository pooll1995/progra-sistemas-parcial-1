#include <iostream>

using namespace std;
void presentar(int l)
{
    int k, i;
    for(i=1; i<=l;i++)
    {
        for (k=1;k<=i; k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }
}
int main()
{   int num;
    cout<<"Ingresar el numero: ";
    cin>>num;
    presentar(num);
}
