#include <stdio.h>
#include <string.h>
#include <ctype.h>
int i, opcion;
char cadena[999];

main(){
	printf("Ingrese una cadena: ");
	fgets(cadena, sizeof(cadena), stdin);
	cadena[strcspn(cadena, "\n")] = '\0';
	for(i=0 ; i<strlen(cadena) ; i++){
		cadena[i]=tolower(cadena[i]);
	}
	printf("\n1. Mostrar en mayuscula\n2. Mostrar en minuscula\n3. Mostrar alternadas\n4. Mostrar empezando las palabras con mayuscula\n\nIngrese su opcion: ");
	scanf("%d",&opcion);
	if(opcion==1){
		for(i=0 ; i<strlen(cadena) ; i++){
			cadena[i]=toupper(cadena[i]);
		}
	}
	else if(opcion==2){
		/*hola*/
	}
	else if(opcion==3){
		for(i=0 ; i<strlen(cadena) ; i=i+2){
			cadena[i]=toupper(cadena[i]);
		}
	}
	else if(opcion==4){
		for(i=0 ; i<strlen(cadena) ; i++){
			cadena[0]=toupper(cadena[0]);
			if(cadena[i]==' '){
				cadena[i+1]=toupper(cadena[i+1]);
			}
		}
	}
	else{
		printf("\nNo se encontro la opcion.");
		return 0;
	}
	printf("\nLa nueva cadena es: %s.",cadena);
}
