#include <stdio.h>
#include <string.h>
FILE *archivo;

void carga(int usado) {
    int cant, i, repetido = 0, j, dniL;
    char nombre[99], apellido[99];
    FILE *archivo = fopen("datos.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo original.\n");
        return;
    }
    int dniExistente[100];
    int cantExistente = 0;
    FILE *nuevo_archivo = fopen("datos_nuevo.txt", "a");
	if (nuevo_archivo == NULL) {
	    printf("Error al abrir el archivo nuevo para agregar datos.\n");
	    fclose(archivo);
	    return;
	}
	FILE *nuevo_archivoR = fopen("datos_nuevo.txt", "r");
	while (fscanf(nuevo_archivoR, "%s %s %d", nombre, apellido, &dniL) != EOF) {
		if(usado==0){
	    	fprintf(nuevo_archivo, "%s %s %d\n", nombre, apellido, dniL);
		}
	    dniExistente[cantExistente] = dniL;
	    cantExistente++;
	}
    fclose(nuevo_archivoR);
    printf("\nIngrese la cantidad de personas a registrar: ");
    scanf("%d", &cant);
    int dni[cant];
    for (i = 0; i < cant; i++) {
        printf("\nIngrese el nombre: ");
        scanf("%s", nombre);
        printf("Ingrese el apellido: ");
        scanf("%s", apellido);
        do {
            repetido = 0;
            printf("Ingrese el DNI: ");
            scanf("%d", &dni[i]);
            for (j = 0; j < cantExistente; j++) {
                if (dni[i] == dniExistente[j]) {
                    printf("\nEl DNI ingresado ya existe. Ingrese uno distinto.\n\n");
                    repetido = 1;
                    break;
                }
            }
        } while (repetido == 1);
        fprintf(nuevo_archivo, "%s %s %d\n", nombre, apellido, dni[i]);
        dniExistente[cantExistente] = dni[i];
        cantExistente++;
    }
    fclose(nuevo_archivo);
    printf("\nDatos cargados exitosamente en el archivo nuevo.\n\n\n");
}

void lectura(){
    archivo = fopen("datos_nuevo.txt", "r");
    if(archivo == NULL){
    	archivo = fopen("datos.txt", "r");
    	if(archivo == NULL){
        	printf("Error al abrir el archivo para lectura.\n");
        	return;
    	}
    }
    int opcion, dni, encontrado=0;
    char nombre[99], apellido[99];
    printf("\n1: Buscar por DNI | 2: Buscar por nombre y apellido\nIngrese su opcion: ");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:{
            int dniBuscar;
            printf("\nIngrese el DNI de la persona que desea buscar: ");
            scanf("%d", &dniBuscar);
            while( fscanf(archivo, "%s %s %d", nombre, apellido, &dni) != EOF ){
                if(dni == dniBuscar){
                    printf("\nEl DNI %d pertenece a %s, %s.\n\n\n", dniBuscar, apellido, nombre);
                    encontrado = 1;
                    break;
                }
            }
            break;
        }
        case 2:{
            char nombreBuscar[99], apellidoBuscar[99];
            printf("\nIngrese el nombre y el apellido de la persona que desea buscar: ");
            scanf("%s %s", nombreBuscar, apellidoBuscar);
            while( fscanf(archivo, "%s %s %d", nombre, apellido, &dni) != EOF ){
                if(strcmp(nombre, nombreBuscar) == 0 && strcmp(apellido, apellidoBuscar) == 0){
                    printf("\n%s, %s tiene el DNI %d.\n\n\n", apellidoBuscar, nombreBuscar, dni);
                    encontrado = 1;
                    break;
                }
            }
            break;
        }
    }
    if(encontrado == 0){
        printf("\nLa persona no fue encontrada.\n\n\n");
    }
    fclose(archivo);
}

void ordenados(){
	int opcion;
	printf("\n1: Ordenar archivo original | 2: Ordenar archivo nuevo\nIngrese su opcion: ");
    scanf("%d", &opcion);
    if(opcion==1){
	    archivo = fopen("datos.txt", "r");
	    if(archivo == NULL) {
	        printf("Error al abrir el archivo para lectura.\n");
	        return;
	    }
	}
	else if(opcion==2){
	    archivo = fopen("datos_nuevo.txt", "r");
	    if(archivo == NULL) {
	        printf("Error al abrir el archivo para lectura.\n");
	        return;
	    }
	}
    int cant = 0, dni[100];
    char nombres[100][99], apellidos[100][99];
    while(fscanf(archivo, "%s %s %d", nombres[cant], apellidos[cant], &dni[cant]) != EOF) {
        cant++;
    }
    fclose(archivo);
    int i, j;
    printf("\n1: Ordenar por nombre y apellido | 2: Ordenar por DNI\nIngrese su opcion: ");
    scanf("%d", &opcion);
    if(opcion == 1){
        for( i = 0 ; i < cant - 1 ; i++ ) {
            for( j = i + 1 ; j < cant ; j++ ) {
                if(strcmp(apellidos[i], apellidos[j]) > 0 || 
                  (strcmp(apellidos[i], apellidos[j]) == 0 && strcmp(nombres[i], nombres[j]) > 0)) {
                    char tempNom[99], tempApe[99];
                    int tempDni;
                    strcpy(tempNom, nombres[i]);
                    strcpy(nombres[i], nombres[j]);
                    strcpy(nombres[j], tempNom);
                    strcpy(tempApe, apellidos[i]);
                    strcpy(apellidos[i], apellidos[j]);
                    strcpy(apellidos[j], tempApe);
                    tempDni = dni[i];
                    dni[i] = dni[j];
                    dni[j] = tempDni;
                }
            }
        }
    }
    else if(opcion == 2){
        for( i = 0 ; i < cant - 1 ; i++ ) {
            for( j = i + 1 ; j < cant ; j++ ) {
                if(dni[i] > dni[j]) {
                    char tempNom[99], tempApe[99];
                    int tempDni;
                    strcpy(tempNom, nombres[i]);
                    strcpy(nombres[i], nombres[j]);
                    strcpy(nombres[j], tempNom);
                    strcpy(tempApe, apellidos[i]);
                    strcpy(apellidos[i], apellidos[j]);
                    strcpy(apellidos[j], tempApe);
                    tempDni = dni[i];
                    dni[i] = dni[j];
                    dni[j] = tempDni;
                }
            }
        }
    }
    else{
        printf("\nOpcion no reconocida.\n\n\n");
        return;
    }
    printf("\nDatos ordenados por "); 
    if(opcion==1){
        printf("nombre y apellido");
    }
    else if(opcion==2){
        printf("DNI");
    }
    printf(":\n");
    for( i = 0 ; i < cant ; i++ ) {
        printf("%s, %s de DNI %d\n", apellidos[i], nombres[i], dni[i]);
    }
    printf("\n\n");
}

int main(int argc, char** argv){
    int opcion, usado=0;;
    do{
        printf("1: Cargar datos | 2: Leer datos | 3: Mostrar datos ordenados | 4: Terminar programa\nIngrese su opcion: ");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:{
                carga(usado);
                usado=1;
                break;
			}
            case 2:
                lectura();
                break;
            case 3:
                ordenados();
                break;
            case 4:
                printf("\nTerminando programa...");
                break;
            default:
                printf("\nOpcion no reconocida.\n\n\n");
                break;
        }
    }while(opcion != 4);
    return 0;
}
