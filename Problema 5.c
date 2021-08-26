//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: n primeros terminos de la serie de Fibonacci"
#include <conio.h>
#include <stdio.h>
int main(){
	//Declarar variables
	int a,b,c,n,i;
	//Asignar valores iniciales
	a = 0;
	b = 1;
	//Entrada de n
	printf("Digite la cantidad de terminos que desea saber de la serie de Fibonacci%c: ",169);
	do{
	scanf("%d",&n);
	if(n <= 0){
		printf("\n[!] ERROR: Ingrese una cantidad entera valida [!] >");
	}
	}while(n <= 0);
	//Salidas asignadas
	switch(n){
		case 1:
			printf("%d",a);
			break;
		case 2:
			printf("%d,%d",a,b);
			break;
		default:
			printf("%d,%d,",a,b);
			for(i=1;i<=n-2;i++){
				c = a + b;	
				if(i < n-2){
		    		printf("%d,",c);
				}
				else{
					printf("%d",c);
				}
				a = b;
				b = c;
			}	
	}
	//getch();
	printf("\n");
    system("pause");
	return 0;
}