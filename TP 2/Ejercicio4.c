#include <stdio.h>
#include <string.h>
int i;
char cadena[50], letra[1], reemplazo[2];

main(){
	printf("Ingrese una cadena: ");
	scanf("%s",cadena);
	printf("Ingrese una letra a reemplazar: ");
	scanf("%s",letra);
	printf("Ingrese la letra de reemplazo: ");
	scanf("%s",reemplazo);
	for(i=0 ; i<strlen(cadena) ; i++){
		if(cadena[i]==letra[0]){
			memset(cadena, reemplazo[0], cadena[i]);
		}
	}
}
