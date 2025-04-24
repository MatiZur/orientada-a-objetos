#include <stdio.h>

int main(int argc, char** argv){
	FILE *archivo;
	char nombre[99], apellido[99];
	int opcion, i, cant, dni;
	do{
		printf("1: Cargar datos | 2: Leer datos | 3: Terminar programa\nIngrese su opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1:
				archivo = fopen("datos.txt", "w");
				printf("\nIngrese la cantidad de personas a registrar: ");
				scanf("%d", &cant);
				for( i = 0 ; i < cant ; i++ ){
					printf("\nIngrese el nombre: ");
					scanf("%s", nombre);
					printf("Ingrese el apellido: ");
					scanf("%s", apellido);
					printf("Ingrese el DNI: ");
					scanf("%d", &dni);
					fprintf(archivo, "%s %s %d\n", nombre, apellido, dni);
				}
				fclose(archivo);
				printf("\nDatos cargados exitosamente.\n\n\n");
				break;
			case 2:
				int opcionR, encontrado=0;
				printf("1: Buscar por DNI | 2: Buscar por nombre y apellido\nIngrese su opcion: ");
				scanf("%d", &opcionR);
				archivo = fopen("datos.txt", "r");
				if(archivo == NULL){
					printf("Error al abrir el archivo para lectura.\n");
					return 0;
				}
				switch(opcionR){
					case 1:
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
					case 2:
						int nombreBuscar, apellidoBuscar;
						printf("\nIngrese el nombre y el apellido de la persona que desea buscar: ");
						scanf("%s %s", nombreBuscar, apellidoBuscar);
						while( fscanf(archivo, "%s %s %d", nombre, apellido, &dni) != EOF ){
					        if((nombre == nombreBuscar) && (apellido == apellidoBuscar)){
					            printf("\n%s, %s tiene el DNI %d.\n\n\n", apellidoBuscar, nombreBuscar, dni);
					            encontrado = 1;
					            break;
					        }
					    }
					    break;
				}
				if(encontrado == 0){
					printf("\nLa persona no fue encontrada.\n\n\n");
				}
				fclose(archivo);
				break;
			case 3:
				printf("\nTerminando programa...");
				break;
			default:
				printf("\nOpcion no reconocida.\n\n\n");
				break;
		}
	}while(opcion != 3);
	return 0;
}
