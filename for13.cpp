#include"stdio.h"

int main(){

 int b, v=9;

for(b=v; b>=100; b = b-5){ //este programa no da un resultado porque para empezar 9 no es mayor que 100 como pide la condición
	printf("b ahora es igual a %d\n",b);
}

	return 0;
}