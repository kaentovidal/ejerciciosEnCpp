#include<iostream>
using namespace std;

int main(){
    int numeros[] = {1,1,1,1,1,1,1,1,1,1} , suma=0;

    /*for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>numeros[i];
    }*/

    for (int i = 0; i < 10; i++)
    {
        suma=suma+numeros[i];
    }
    cout<<"La suma es: "<<suma;
    return 0;
    
}