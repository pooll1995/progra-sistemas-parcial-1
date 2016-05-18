#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int count = 0;
    int divNumbers = 0;
    while (count<10){

        cout << "Ingrese el numero deasado" ;
        cin >> number;
        if(number%5==0){
            divNumbers++;
        }
        count++;
    }

     cout << "Se puede dividir: " ;
    cout << divNumbers;
}
