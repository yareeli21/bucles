#include"stdio.h"

int main(){
 int digito;

 do{
 	printf("Introduzca un dígito (0-9): ");
 	scanf("%d",digito);
 }while((digito < '0')||('9' < digito));


	return 0;
}