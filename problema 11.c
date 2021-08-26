//11. Programa que comprueba si dos numeros enteros son amigos.

#include <stdio.h>

int main(){
	
	int x,y,i,divuno,divdos;
	
	divuno = 0;
	divdos = 0;

	printf ("Ingrese un n%cmero entero positivo:\n",163);
	scanf ("%d",&x);
	printf ("\nIngrese otro n%cmero entero positivo:\n",163);
	scanf ("%d", &y);
	
	for (i = 1; i <= x/2; i++){
		if (x % i == 0) divuno += i;
	}
	for (i = 1; i <= y/2; i++){
		if (y % i == 0) divdos += i;
	}
	
	if (x == divdos && y == divuno){
		printf("\nExcelente! %d y %d son n%cmeros amigos.\n\n", x, y, 163);
	}
	else{
		printf("\nL%cstima, %d y %d no son n%cmeros amigos\n\n", 160, x, y, 163);
	}
	
	system ("pause");
	return 0;
}
