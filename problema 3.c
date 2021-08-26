//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Algoritmo que suma e imprima los numeros de la serie: 2,5,7,10,12,15,17,...,1800"
#include <conio.h>
#include <stdio.h>
int main(){
	//Declarar variables
    int band,val,suma;
    //Asignar Valores
    band = 1;
    val=2;
    suma = 2;
    //Desarrollo de la serie
    printf("La suma de la serie ");
    do{
    	//Imprimir valores de la serie
    	if(val < 1800){
    		printf("%d,",val);
		}
		else{
			printf("%d",val);
		}
		//Suma por valores
        if (band==1){
            val = val + 3;
            band = 0;
        }
        else{
            val = val + 2;
            band = 1;
        }
        suma = suma + val;
    } while (val <= 1800);
    //Resultado de suma de todos los valores
    printf(" es: %d\n",suma);
    //getch();
    system("pause");
	return 0;
}