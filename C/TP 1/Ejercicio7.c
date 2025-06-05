#include <stdio.h>
int i, num, cant=0, par=0, impar=0;

main(){
	printf("Bienvenido a este programa. Ingrese 0 para dejar de ingresar numeros.\n\n");
	do{
		printf("Ingrese un numero: ");
		scanf("%d",&num);
		if(num!=0){
			cant++;
			if(num % 2 == 0){
				par++;
			}
			else{
				impar++;
			}
		}
	}while(num!=0);
	printf("\nSe ingresaron %d numeros, de los cuales %d eran pares y %d impares.",cant,par,impar);
}
