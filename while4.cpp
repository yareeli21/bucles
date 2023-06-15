#include<stdio.h>

int main(){

  //programa para calcular las calorías totales
    
	int num_de_alimentos, cuenta, calorias_por_alimento, calorias_total;
	//se está pidiendo al usuario poner cuántos alimentos ha consumido
	printf("¿Cuantos alimentos has comido hoy?");
	scanf("%d ", &num_de_alimentos);
	//se están inicializando estas dos variables
    calorias_total=0; 
    cuenta=1;
    /*se está imprimiendo el numero de alimentos consumidos, pero para la parte de introducir, se usará el while
    ya que, mientas que la cuenta sea menor o igual al numero de elementos nos arrojará la opción 
    de poder digitar el # de calorías de cada alimento*/
    printf("Introducir el numero de calorias de cada uno de los ");
    printf("%d %s", num_de_alimentos, "alimentos comidos: \n");
    //la cuenta es para que vaya incrementandose el mensaje de introducir y que se pueda escribir
    while(cuenta++ <= num_de_alimentos)
{
	//se está lanzando el espacio para digitar el número de calorías
	scanf("%d ", &calorias_por_alimento);
    //cada número de calorías se irá sumando
    calorias_total += calorias_por_alimento;
}
//saliendo del bucle se imprime el total de calorías
printf("Las calorias totales consumidas hoy son = %d \n",calorias_total);
	return 0;
}