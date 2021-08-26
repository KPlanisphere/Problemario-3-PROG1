//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I -  Numero primo
#include <stdio.h>

int main(){

    int num, i, cont= 0;

    printf("Digite un numero: ");
    scanf("%i", &num);

    for (i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            cont++;
        } 
    }

    if (cont>2){
        printf("\n El numero %d NO es primo.", num);
    }
    else{
        printf("\n El numero %d SI es primo.", num);
    }
    
    return 0;
}