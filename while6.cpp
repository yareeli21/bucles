#include"stdio.h"

int main(){

  int contador;
  contador=10; // estamos inicializando el contador
   
   while(contador > 100){ //se está poniendo la condición de que sea mayor a 100, cosa que no se cumplirá porque inicializamos en 10 y este es menor a 100
   	printf("%d",contador);
   	contador++;
   }

	return 0;
}