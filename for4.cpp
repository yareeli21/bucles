#include<stdio.h>

int main(){

  int n;
  for(n=10;n>5;n--) /*como va en decremento ahora  se busca que sea mayor, el último a tomar en cuenta
  en la condición, pues va de mayor a menor, además de que se inicializa desde el número mayor */
  	printf("%d \t %d \n",n, n * n); //mismo procedimeinto de multiplicación


	return 0;
}