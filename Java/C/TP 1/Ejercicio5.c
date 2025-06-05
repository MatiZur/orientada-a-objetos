#include <stdio.h>
int num, i, divisores=0;

main(){
	printf("Ingrese un numero: ");
	scanf("%d",&num);
    for(i = 1 ; i < num ; i++){
        if(num % i == 0){
            divisores++;
   		}
    }
    printf("\nEl numero ");
    if(divisores>1){
    	printf("no ");
	}
    printf("es primo");
}
