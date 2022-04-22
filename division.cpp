#include<iostream>
#include  <stdio.h>
#include <time.h>
 
void rellenar_array (int array[],int size){
	int i,last=0;
	for (i=0;i <size;i++){
	    last=last + rand()%5 +1;
	    array [i]=last;
	}
}
 
void imprimir (int array[],int size){
	int i;
	for (i=0;i <size;i++)
	    if (i<size-1)
	        printf ("%i, ",array [i]);
	    else
	        printf ("%i\n",array [i]);
}
 
void barajar (int array[],int size){
	int i, r, aux;
 
	for (i=0;i <size-1;i++){
	    r=rand ()%size;
	    aux=array [i];
	    array [i]=array [r];
	    array [r]=aux;
	}
}
 
 
int main (){
    int array [10];
    int size=10;
 
    srand (time (NULL));
    rellenar_array (array,size);
    printf ("Ordenados:\n");
    imprimir (array,size);
    barajar (array, size);
    printf ("Desordenados:\n");
    imprimir (array, size);
    return 0;
}