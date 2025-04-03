#include <stdio.h>
#include <string.h>
int i, j, aux, iguales=0;
char cadena1[999], cadena2[999];

main(){
	printf("Ingrese una cadena: ");
	fgets(cadena1, sizeof(cadena1), stdin);
	cadena1[strcspn(cadena1,"\n")]='\0';
	for(i=0 ; i<strlen(cadena1) ; i++){
		if(cadena1[i]==' '){
			for(j=i ; j<strlen(cadena1) ; j++){
				cadena1[j]=cadena1[j+1];
				cadena1[j+1]=' ';
			}
		}
	}
	printf("Ingrese otra cadena: ");
	fgets(cadena2, sizeof(cadena2), stdin);
	cadena2[strcspn(cadena2,"\n")]='\0';
	for(i=0 ; i<strlen(cadena2) ; i++){
		if(cadena2[i]==' '){
			for(j=i ; j<strlen(cadena2) ; j++){
				cadena2[j]=cadena2[j+1];
				cadena2[j+1]=' ';
			}
		}
	}
	printf("\n");
	if(strlen(cadena1)==strlen(cadena2)){
		for(i=0 ; i<strlen(cadena1) ; i++){
			for(j=0 ; j<strlen(cadena1) ; j++){
				if(cadena1[i]==cadena2[j]){
					iguales++;
					cadena2[j]=' ';
					break;
				}
			}
		}
		if(iguales==(strlen(cadena1))){
			printf("Las cadenas son anagramas.");
		}
		else{
			printf("Las cadenas no son anagramas.");
		}
	}
	else{
		printf("Las cadenas no son anagramas.");
	}
}
