#include <stdio.h>
#include <string.h>
FILE *archivo;

void carga(){
     int cant, i;
     char nombre[99], apellido[99];
     archivo = fopen("datos.txt", "w");
     printf("\nIngrese la cantidad de personas a registrar: ");
     scanf("%d", &cant);
     int dni[cant], repetido=0, j;
     for( i = 0 ; i < cant ; i++ ){
          printf("\nIngrese el nombre: ");
          scanf("%s", nombre);
          printf("Ingrese el apellido: ");
          scanf("%s", apellido);
          do {
               repetido=0;
               printf("Ingrese el DNI: ");
               scanf("%d", &dni[i]);
               for( j = 0 ; j < i ; j++ ){
                    if( dni[i] == dni[j] ) {
                         printf("\nEl DNI ingresado ya existe. Ingrese uno distinto.\n\n");
                         repetido=1;
                         break;
                    }
               }
          }while(repetido==1);
          fprintf(archivo, "%s %s %d\n", nombre, apellido, dni[i]);
     }
     fclose(archivo);
     printf("\nDatos cargados exitosamente.\n\n\n");
}

void lectura(){
     archivo = fopen("datos.txt", "r");
     if(archivo == NULL){
          printf("Error al abrir el archivo para lectura.\n");
          return;
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

int main(int argc, char** argv){
     int opcion;
     do{
          printf("1: Cargar datos | 2: Leer datos | 3: Terminar programa\nIngrese su opcion: ");
          scanf("%d", &opcion);
          switch(opcion){
                 case 1:
                      carga();
                      break;
                 case 2:
                      lectura();
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
