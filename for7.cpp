#include"stdio.h"

int main(){
 //este será de decremento, desde el 9 para abajo, de 3 en 3, se despliega el número y la multiplicación con el mismo número
  int x;
  for(x=9; x>=0; x-=3) //desde 9 empieza, se irá decrementando siempre y cuando sea mayor o igual a 0 e irá de 3 en 3 para abajo
  	printf("%d %d\n",x, x * x);


	return 0;
}