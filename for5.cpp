//rango de incremento más alto

#include<stdio.h>

int main(){
 //un bucle que aumente de 20 en 20 hasta 100 e imprima el número y la multiplicación con su respectivo número
 int x;
 for(x=0;x<100;x+=20)
     printf("%d \t %d\n",x, x * x);

	return 0;
}