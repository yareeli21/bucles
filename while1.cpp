#include<stdio.h>
//visualizaremos cierto número de asteriscos
int main(){

  int n, contador;
  /*printf("¿Cuantos asteriscos deseas?");
  scanf("%d",n); */
  contador=1;
//mientras que el contador sea menor al número que de solicitó
  while(contador < 20)
  {
  	printf("  %d \n ",contador); //se irá imprimeindo un asterisco y a su vez aumentando el contador
  	contador++;
  }


	return 0;
}