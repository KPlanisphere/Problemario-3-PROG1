/*14. Programa que lee números enteros hasta que cumpla ciertas condiciones
1.Sea múltiplo de 2
2.No múltiplo de 5
3.Mayor que 100
4.Menor que 10,000
*/

#include <stdio.h>

int main (){
    
    int x,sansu;
    
    do{
    printf("Ingrese un n%cmero para verificar las condiciones:\n",163);
    sansu = 0;
        scanf("%d",&x);
        
        if(x >= 100 && x <= 10000){
            if(x % 2 == 0 && x % 5 != 0){
                printf("El n%cmero cumple con todas las condiciones.\n",163);
                sansu=1;
            }
            else{
            	printf ("El n%cmero no cumple con todas las condiciones.\n",163);
			}
        }
        else{
        	printf ("El n%cmero no est%c en el rango solicitado.\n",163,160);
		}
		
    printf ("\n");
    
    }while(sansu == 0);
	system("pause");
    return 0;
}
