#include <stdio.h>
#include <string.h>
int i;
char cadena1[999], cadena2[999], *comp;

main(){
	printf("Ingrese una cadena larga: ");
	fgets(cadena1, sizeof(cadena1), stdin);
	cadena1[strcspn(cadena1,"\n")]='\0';
	printf("Ingrese una cadena mas corta: ");
	fgets(cadena2, sizeof(cadena2), stdin);
	cadena2[strcspn(cadena2,"\n")]='\0';
	comp = strstr(cadena1, cadena2);
	if(comp != NULL){
		printf("La subcadena \"%s\" se encuentra en la cadena \"%s\" en la posicion %d",cadena2,cadena1,comp);
	}
	else{
		printf("La subcadena \"%s\" no se encuentra en la cadena \"%s\".",cadena2,cadena1);
	}
}
