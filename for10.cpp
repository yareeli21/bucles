//suma de los 10 primeros números pares
#include<stdio.h>

int main(){

  int i, suma;
  suma=0;
  for(i=1;i<10;i++){
  	suma += 2*i; /*aquí se está diciendo que la suma es de cada valor de i más ese mismo multiplicado 
  	por 2, es decir, tenemos que la suma inicia en 0. Entonces 0 + (1*2) lo que está
  	en paréntesis se refiere a la expresión de la suma (2*i)*/
}
printf("La suma de los primeros 10 ńumeros pares es: %d",suma);
	return 0;
}