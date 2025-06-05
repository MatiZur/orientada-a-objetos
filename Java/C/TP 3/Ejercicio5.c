#include <stdio.h>
#include <string.h>

void concatenar(char *cadena1, char *cadena2){
	strcat(cadena1, " ");
	strcat(cadena1, cadena2);
}

int main(){
	int opcion;
	char cadena1[99], cadena2[99];
	printf("Ingrese la cadena 1: ");
	scanf("%s",cadena1);
	printf("Ingrese la cadena 2: ");
	scanf("%s",cadena2);
	concatenar(cadena1, cadena2);
	printf("\nLas cadenas concatenadas quedan: %s.",cadena1);
	return 0;
}
