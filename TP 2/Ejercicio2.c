#include <stdio.h>
#include <string.h>
int i, vocales;
char cadena[100];

main(){
	printf("Ingrese una cadena de caracteres: ");
	scanf("%s",cadena);
	for(i=0;i<strlen(cadena);i++){
		if(cadena[i]=='a' || cadena[i]=='e' || cadena[i]=='i' || cadena[i]=='o' || cadena[i]=='u'){
			vocales++;
		}
	}
	printf("Se encontraron %d vocales en la cadena.",vocales);
}
