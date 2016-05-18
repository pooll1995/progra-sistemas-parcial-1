#include <iostream>

using namespace std;
int horas,pagohoras;
float pagot;
/*ingresar las horas, el pago por hora
luego calcularel pago total
*/
int main()
{
 cout<<"ingresar las Horas:  ";
 cin>>horas;

 cout<<"Ingresar pago por hora:  ";
 cin>>pagohoras;

 pagot= horas*pagohoras;
 cout<<"El pago total es:  "<<pagot<<"\n";
}
