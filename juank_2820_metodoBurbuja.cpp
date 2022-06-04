#include<iostream>
using namespace std;

int main(){
	
	int numeros[] = {3,2,4,11,6,4,7}, i, j, aux;
	
	cout<<"METODO DE LA BURBUJA"<<endl<<"Array original: ";
	for(i=0; i<7; i++){
		
		cout<<"["<<numeros[i]<<"]";

	}
	
	cout<<endl<<"Array ordenado: ";
	
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			
			if(numeros[j] > numeros[j+1]){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;	
			}		
		}
	}
	
	for(i=0; i<7; i++){
		cout<<"["<<numeros[i]<<"]";
	}
	
}
