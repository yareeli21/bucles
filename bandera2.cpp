//se desea leer un dato numérico x cuyo valor ha de ser mayor que cero para calcular la función f(x)=x*log(x)

#include<stdio.h>
#include<math.h>
int main(){

  float f,x;
  int x_positivo;
  x_positivo=0; //lo inicializamos en falso
  while(!x_positivo){

  	printf("\n valor de x: ");
  	scanf("%f",&x);
  	x_positivo=(x>0.0); //aquí se está diciendo cuándo es positiva la bandera, se ponde dentro del cuerpo del bucle
  }

  f=x*log(x); //aquí se está poniend la operación de la función
  printf("f(%f) = %.3e",x,f); //cómo se imprimirá la función

	return 0;
}