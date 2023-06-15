#include"stdio.h"
#define MAX 45
int main(){

 int x,y;
 for(x=0,y=MAX; x < y; x++, y--)//estamos trabajando con 2 variables de control
 	printf("%d\n",(x + 2 *y));


	return 0;
}