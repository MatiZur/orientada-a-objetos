#include <stdio.h>
int numero, esPrimo=1, i;

main(){
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
    if(numero<=1){
    	esPrimo = 0;
    }
	else{
        for(i = 2 ; i * i <= numero ; ++i){
            if(numero%i==0){
                esPrimo=0;
                break;
            }
        }
    }
    printf("\nEl numero ");
    if(esPrimo==0){
    	printf("no ");
	}
    printf("es primo");
}

