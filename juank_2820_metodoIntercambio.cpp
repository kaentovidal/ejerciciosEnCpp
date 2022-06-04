#include<iostream>
using namespace std;

int desde,hasta,medio,elemento,posicion; // desde y
      // hasta indican los límites del array que se está mirando.
int array[N];

// Dar valor a elemento.

for(desde=0,hasta=N-1;desde<=hasta;)
{
   if(desde==hasta) // si el array sólo tiene un elemento:
   {
      if(array[desde]==elemento) // si es la solución:
         posicion=desde; // darle el valor.
      else // si no es el valor:
         posicion=-1; // no está en el array.
      break; // Salir del bucle.
    }
   medio=(desde+hasta)/2; // Divide el array en dos.
   if(array[medio]==elemento) // Si coincide con el central:
   {
      posicion=medio; // ese es la solución
      break; // y sale del bucle.
    }
   else if(array[medio]>elemento) // si es menor:
      hasta=medio-1; // elige el array izquierda.
   else // y si es mayor:
      desde=medio+1; // elige el array de la derecha.
 }
