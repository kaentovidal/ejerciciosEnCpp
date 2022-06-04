#include<iostream>
#include<conio.h>
using namespace std;

int expo(int, int);

int main(){
	cout<<expo(2,0);
}

int expo(int x, int y){
	if (y==0){
		return 1;
	}else{
		
		x=x*expo(x,y-1);
	}
}
