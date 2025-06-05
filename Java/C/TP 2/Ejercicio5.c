#include <stdio.h>
#include <string.h>
int i, palabras=1;
char cadena[500];

main(){
	printf("Imprima una cadena que contenga espacios: ");
	fgets(cadena, sizeof(cadena), stdin);
	for(i=0 ; i<strlen(cadena) ; i++){
		if(cadena[i]==' '){
			palabras++;
		}
	}
	printf("\nLa cadena tiene %d palabras.",palabras);
}
