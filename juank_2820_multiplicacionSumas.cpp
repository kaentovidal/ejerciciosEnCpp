#include<iostream>
using namespace std;

int expo(int);
int valorDos;
	

int main(){
		
	int primerValor; 
	cout<<"Ingrese el multiplicando: ";cin>>primerValor;
	cout<<"Ingrese el multiplicador: ";cin>>valorDos;
	
	cout<<expo(primerValor);

}

int expo(int multiplicador){
		
	if (multiplicador == 0){
		return multiplicador;
	}else{
		
		multiplicador = valorDos+expo(multiplicador-1);
		
	}
	
}
