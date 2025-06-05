#include <stdio.h>
#include <string.h>
int i, cambio=0;
char cadena[50], letra, reemplazo;

main(){
	printf("Ingrese una cadena: ");
	scanf("%s",cadena);
	printf("Ingrese una letra a reemplazar: ");
	scanf(" %c",&letra);
	printf("Ingrese la letra de reemplazo: ");
	scanf(" %c",&reemplazo);
	for(i=0 ; i<strlen(cadena) ; i++){
		if(cadena[i]==letra){
			cadena[i]=reemplazo;
			cambio=1;
		}
	}
	printf("\n");
	if(cambio==1){
		printf("La nueva cadena es: %s.",cadena);
	}
	else{
		printf("No se encontro la letra a reemplazar.");
	}
}
