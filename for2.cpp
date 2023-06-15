#include"stdio.h"
#include"math.h"
// se va a imprimir la función 15 veces con distintos valores
#define x 15
#define f(x) exp(2*x)-x // se está definiendo una constante para la función
int main(){
	
  int i;
  float y;
  for(i=0; i < x; i++){ // se va a iterar 15 veces
  	printf("Escriba un numero: ");
  	scanf("%f",&y);
    printf("f(%.1f)=%.4g\n",y,f(x));
  }

	return 0;
}