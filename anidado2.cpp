#include<stdio.h>

int main(){

 int i,j; //las variables de control de ambos bucles

 printf("\n\t\t i \t j\n");
 for(i=0; i <4; i++){
 	printf("Externo\t %d\n",i);
 	for(j=0; j < i; j++){
 		printf("Interior\t\t %d \n",j);
 	}
 }


	return 0;
}