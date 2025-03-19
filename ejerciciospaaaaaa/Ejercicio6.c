#include <stdio.h>
int i, num, cant=0, divisores=0, primo=0, noPrimo=0;

main(){
	printf("Bienvenido a este programa. Ingrese 0 para dejar de ingresar numeros.\n\n");
	do{
		printf("Ingrese un numero: ");
		scanf("%d",&num);
		if(num!=0){
			cant++;
			for(i = 1 ; i < num ; i++){
		        if(num % i == 0){
	            divisores++;
				}
			}
			if(divisores>1){
		    	noPrimo++;
			}
			else{
				primo++;
			}
			divisores=0;
		}
	}while(num!=0);
	printf("\nSe ingresaron %d numeros, de los cuales %d eran primos y %d no primos.",cant,primo,noPrimo);
}
