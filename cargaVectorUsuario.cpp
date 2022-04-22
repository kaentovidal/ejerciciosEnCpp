#include<iostream>
using namespace std;

int main(){
    int t, *A;

    cout<<"Ingrese la cantidad de celdas a generar: ";
    cin>>t;
    A = new int [t];

    int Sa=0;

    for (int i = 0; i < t; i++)
    {
        cout<<"ingrese un valor para Array["<<i+1<<"]: ";
        cin>>A[i];
    }
    
    for (int i = 0; i < t; i++)
    {
        cout<<"["<<A[i]<<"] ";
    }

}