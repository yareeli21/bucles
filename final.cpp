#include<stdio.h>

int main(){
  int numero, suma=0;
  char respuesta='S'; //se inicializa porque es para que empiece diciendo que sí se ejecute el cuerpo
  while((respuesta == 'S') || (respuesta == 's')){
  	printf("Introduzca un número: ");
  	scanf("%d\n",numero);
  	suma += numero;
  	printf("¿Existen más números? (S para Sí, N para No): ");
  	scanf("%c",&respuesta);
  }

	return 0;
}