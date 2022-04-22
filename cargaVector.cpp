#include<iostream>
using namespace std;

int main(){
    int t, *A, last;

    cout<<"Ingrese la cantidad de celdas a generar: ";
    cin>>t;
    A = new int [t];

    
    for (int i = 0; i < t; i++)
    {
        last += rand()%5+1;
        A [i] = last;
        cout<<"["<<A[i]<<"] ";
    }

}