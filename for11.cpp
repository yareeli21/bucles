#include<stdio.h>

int main(){
 int n, suma;

  suma=0;
 for(n=2;n<20;n +=2){ //hasta 20 porque el 20 es el decimo número par que existe
 	suma += n;
}
printf("La suma de los primeros 10 números pares es: %d",suma);

	return 0;
}