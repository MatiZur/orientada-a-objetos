#include <stdio.h>
#include <string.h>
int i, resultado;
char cadena[50], cadenaReves[50];

main(){
	printf("Ingrese una cadena: ");
	scanf("%s",cadena);
	for(i=0 ; i<strlen(cadena) ; i++){
		cadenaReves[i]=cadena[strlen(cadena)-i-1];
	}
	resultado=strcmp(cadena,cadenaReves);
	if(resultado==0){
		printf("\nLa cadena es palindroma.");
	}
	else{
		printf("\nLa cadena no es palindroma.");
	}
}
