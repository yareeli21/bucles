#include"stdio.h"

int main(){

  int contador=0;                         //inicialización
  int max;
  printf("¿Cuántos holas deseas?");
  scanf("%d",&max);

  for(;;){                                //bucle for que nunca termina
   
   if(contador < max){                    //test/sentencias
   	puts("Hola");
   contador++;                            //incremento
}
   else 
     break;                               //aquí para
  }



	return 0;
}