#include"stdio.h"

int main(){
 //será de incremento del 1 hasta el 100 y el incremento será de cada número por 2
	int n;
	for(n=1;n<100;n *=2) //inicializa en 0 porque después se ejecutará una multiplicación
		printf("%d\n",n);


	return 0;
}