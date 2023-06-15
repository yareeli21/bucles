#include<stdio.h>

int main(){
  //introduciremos datos y como centinela pondremos -1
    const int centinela=-1; //se está declarando una constante de tipo entero llamada centinela definida con -1
	int nota, cuenta;
	cuenta=0;
    
    printf("Digite una nota: ");
    scanf("%d", &nota);

    while(nota != centinela){
    	 
    	printf("Introduzca la siguiente nota: ");
    	scanf("%d\n",&nota);
    	cuenta++;//la cuenta irá aumentando para que se siga generando uno de introducir una nota
    }

   puts("Final");
	return 0;
}