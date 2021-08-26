//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I -  Conjetura de ULAM 
#include <stdio.h>

int main(){

    int num, i;
    
    printf("Digite un numero entero positivo:  ");
    scanf("%d", &num);

    if (num>0){
        printf("\n El numero es positivo \n");

    while (num!=1)
    {
        if (num%2==0){
           num=num/2; 
           printf("\n %d", num);

        }else{
            num=num*3+1;
            printf("\n %d", num);
        } 
    }

    }else
        printf("\n El numero no es positivo");
      
    return 0;
}