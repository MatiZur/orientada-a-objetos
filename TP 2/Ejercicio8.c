#include <stdio.h>
#include <string.h>
int i, j, letrasPrimera=0, cont=0, letras=0;
char cadena[999];

main(){
	printf("Ingrese una cadena de 5 palabras: ");
	fgets(cadena, sizeof(cadena), stdin);
	cadena[strcspn(cadena,"\n")]='\0';
	int longitud = strlen(cadena);
	for(i=0 ; i<longitud ; i++){
		if(cadena[i]!=' '){
			letrasPrimera++;
		}
		else{
			break;
		}
	}
	for(j=0 ; j<letrasPrimera ; j++){
		for(i=0 ; i<longitud ; i++){
				if((i==0 && j==0) || cadena[i-1]==' ' || cadena[i-1]==cadena[j-1]){
					if(cadena[i]==cadena[j]){
						cont++;
						if(cont==5){
							letras++;
					}
				}
			}
		}
		cont=0;
	}
	printf("\n");
	if(letras>=0){
		printf("La cadena de caracteres repetidos mas larga entre las palabras proporcionadas es: \"");
		for(i=0 ; i<letras ; i++){
			printf("%c",cadena[i]);
		}
		printf("\".");
	}
	else{
		printf("No se encontro una cadena de caracteres repetidos entre las palabras proporcionadas.");
	}
}
