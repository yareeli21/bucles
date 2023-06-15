#include<stdio.h>
#define CLAVE -999
int main(){
 int num;
 for(;;){
 	printf("Introduzaca un número (%d) para terminar",CLAVE);
 	scanf("%d",&num);
 	if(num == CLAVE) break;
 }
	return 0;
}