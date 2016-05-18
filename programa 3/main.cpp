#include <iostream>

using namespace std;
int notaacum, notaexam, notafin;
/*ingrear la nota acumulada y examen del alumno
y presentar la nota final*/
int main()
{
    cout << "Ingresar el acumulativo del alumno: ";
    cin >> notaacum;

    cout<<"Ingresar la nota de examen del alumno: ";
    cin>>notaexam;

    notafin=notaacum+notaexam;
    cout<< "La nota final del alumno es: "<<notafin<<"\n";

    if(notafin>=60)
    {
        cout<<"Aprobado";
    }
    else
    {
        cout<<"Reprobado";
    }
    cout<<"\n";
    return 0;
}
