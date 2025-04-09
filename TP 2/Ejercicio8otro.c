#include <stdio.h>
#include <string.h>
int i, j, len, maxLongitudComun = 0;
char cadena[999];

main(){
    printf("Ingrese una cadena de palabras: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0';
    int longitud = strlen(cadena);
    for (i=0 ; i < longitud ; i++){
        for (j=i+1 ; j<longitud ; j++){
            len=0;
            if (cadena[i]==cadena[j]){
                len++;
                i++; 
                j++;
            }
            if (len>maxLongitudComun){
                maxLongitudComun=len;
            }
        }
    }
    if(maxLongitudComun>0){
        printf("La longitud de la cadena de caracteres repetidos mas larga entre las palabras proporcionadas es: %d.\n", maxLongitudComun);
    }
	else{
        printf("No se encontro una cadena de caracteres repetidos entre las palabras proporcionadas.\n");
    }
}
