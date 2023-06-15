#include<stdio.h>

int main(){
	
  int x, xlast, y, ylast;
  /*printf("Digite hasta qué número deseea hacer multiplicaciones: ");
  scanf("%d",xlast);
  printf("DIgite hasta qué número se hará cada multiplicación: ");
  scanf("%d",ylast); */
  for(x=1; x <= 5; x++){
  	for(y=1; y <= 5; y++){
  		int producto;
  		producto= x * y;
  		printf("%d * %d= %d \n",x, y, producto);
  	}
  }

	return 0;
}