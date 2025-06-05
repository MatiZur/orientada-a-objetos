#include <stdio.h>
#include <string.h>
char cadena1[999], cadena2[999];

main(){
	printf("Ingrese una cadena larga: ");
	fgets(cadena1, sizeof(cadena1), stdin);
	cadena1[strcspn(cadena1,"\n")]='\0';
	printf("Ingrese una cadena mas corta: ");
	fgets(cadena2, sizeof(cadena2), stdin);
	cadena2[strcspn(cadena2,"\n")]='\0';
	char *comp;
	comp = strstr(cadena1, cadena2);
	printf("\n");
	if (comp != NULL){
		printf("La subcadena \"%s\" se encuentra en la cadena \"%s\" en la posicion %d.", cadena2, cadena1, comp - cadena1);
	}
	else{
		printf("La subcadena \"%s\" no se encuentra en la cadena \"%s\".", cadena2, cadena1);
	}
}
