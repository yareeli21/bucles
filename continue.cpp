#include<stdio.h>

int main(){

 int clave, i;
 puts("Introduce -9 para acabar.");
 clave=1;

 for (i=0; i < 8; i++){
 	if(clave == -9) continue;
 	scanf("%d",&clave);
 	printf("clave %d\n",clave);
 }
 printf("VALORES FINALES i= %d clave = %d",i, clave);

	return 0;
}