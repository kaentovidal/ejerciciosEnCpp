#include <iostream>
using namespace std;


int division(int, int);

int main(int argc, char *argv[]) {
 int n1,n2;
 cout<<"ingrese dividendo: ";cin>>n1;
 cout<<"ingrese divisor: ";cin>>n2;
 
 cout<<"el resultado es:"<<division(n1,n2)<<endl;
}

int division (int a, int b) {
	
 if(b > a) {
  return 0;
 }else{
  return division(a-b, b) + 1;
}

