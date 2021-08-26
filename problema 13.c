//13. Programa que calcula el MCD de dos números mediante el algoritmo de Euclides

#include <stdio.h>

int main(){
	
	int x,y,res;
	
	printf ("Ingrese el n%cmero que servir%c de dividendo:\n",163,160);
	scanf ("%d",&x);
	printf ("\nIngrese el n%cmero que servir%c de divisor:\n",163,160);
	scanf ("%d",&y);
	
	res = x % y;
	
	if (res == 0){
		printf ("\nEl M%cximo Com%cn Divisor es %d\n\n",160, 163, y);
	}
	while (res != 0){
		x = y;
		y = res;
		res = x % y;
		if (x % y == 0 ){
		printf ("\nEl M%cximo Com%cn Divisor es %d\n\n",160, 163, y);
		}
	}
	
	system ("pause");
	return 0;
}
