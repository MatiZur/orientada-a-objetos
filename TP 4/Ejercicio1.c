#include <stdio.h>
FILE *archivo;

void carga(){
     int cant, i, dni;
     char nombre[99], apellido[99];
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
}

void lectura(){
     archivo = fopen("datos.txt", "r");
     int dni, dniBuscar, encontrado=0;
     char nombre[99], apellido[99];
     if(archivo == NULL){
          printf("Error al abrir el archivo para lectura.\n");
          return;
     }
     printf("\nIngrese el DNI de la persona que desea buscar: ");
     scanf("%d", &dniBuscar);
     while( fscanf(archivo, "%s %s %d", nombre, apellido, &dni) != EOF ){
          if(dni == dniBuscar){
                 printf("\nEl DNI %d pertenece a %s, %s.\n\n\n", dniBuscar, apellido, nombre);
                 encontrado = 1;
                 break;
          }
     }
     if(encontrado == 0){
          printf("\nEl DNI no fue encontrado.\n\n\n");
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
