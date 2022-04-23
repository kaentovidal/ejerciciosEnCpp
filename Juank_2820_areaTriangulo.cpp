#include <iostream>
using namespace std;
float base, altura, resultado;

int main(){

cout << "Ingrese la base del triangulo: ";
cin >> base;
cout << "Ingrese la altura del triangulo: ";
cin >> altura;

resultado=(base*altura)/2; // Formula matematica para calcular el area del triangulo.

cout << "El area de su triangulo es: " << resultado << endl;

}