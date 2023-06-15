#include<stdio.h>

int main(){
  //este while se detendrá hasta que la bandera sea falsa, hasta que se digite un dígito porque solo queremos caracteres
  int digito_leido=0; //esta será nuestra bandera y está inicializada en 0 (falso)
  char car;
  //int cuenta=0;

  while(!digito_leido){//se dice que mientas no sea falsa la condición de que sea falsa la bandera

    printf("Introduca un caracter: ");
    scanf("%c",&car);
    //cuenta++;
    digito_leido= (('0' <= car) && (car <= '9')); //dentro del cuerpo de dice qué es digito_leido, esta diciendo que digito_leido es un digito (0-9)
    //cuando es verdadera la bandera
  }

  puts("Final");
	return 0;
}