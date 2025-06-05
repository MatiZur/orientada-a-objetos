#include <stdio.h>
#include <string.h>
FILE *archivo;

void cargar() {
    char nombre[100];
    int puntaje, cantidad, i;
    archivo = fopen("puntajes.txt", "a+");
    if (archivo == NULL) {
        printf("\nError al abrir archivo para cargar datos.\n\n\n");
        return;
    }
    printf("\nIngrese la cantidad de jugadores que desea cargar: ");
    scanf("%d", &cantidad);
    printf("\n");
    for (i = 0; i < cantidad; i++) {
        printf("Ingrese el nombre del jugador %d: ",i+1);
        scanf("%s", nombre);
        printf("Ingrese el puntaje del jugador %d: ",i+1);
        scanf("%d", &puntaje);
        fprintf(archivo, "%s %d\n", nombre, puntaje);
        printf("\n");
    }
    fclose(archivo);
    printf("Datos guardados correctamente.\n\n\n");
}

void mostrar() {
    char nombres[100][100];
    int puntajes[100], cant = 0, i, j;
    archivo = fopen("puntajes.txt", "r");
    if (archivo == NULL) {
        printf("\nError al abrir archivo para leer datos.\n\n\n");
        return;
    }
    while (fscanf(archivo, "%s %d", nombres[cant], &puntajes[cant]) != EOF) {
        cant++;
    }
    fclose(archivo);
    for (i = 0; i < cant - 1; i++) {
        for (j = i + 1; j < cant; j++) {
            if (puntajes[i] < puntajes[j]) {
                int tempP = puntajes[i];
                puntajes[i] = puntajes[j];
                puntajes[j] = tempP;
                char tempN[100];
                strcpy(tempN, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], tempN);
            }
        }
    }
    printf("\nTop 10 jugadores:\n");
    for (i = 0; i < cant && i < 10; i++) {
        printf("%d. %s - %d puntos\n", i + 1, nombres[i], puntajes[i]);
    }
    printf("\n\n");
}

void buscar() {
    char nombreBuscar[100], nombre[100];
    int puntaje;
    int encontrado = 0;
    archivo = fopen("puntajes.txt", "r");
    if (archivo == NULL) {
        printf("\nError al abrir archivo para leer datos.\n\n\n");
        return;
    }
    printf("\nIngrese el nombre del jugador a buscar: ");
    scanf("%s", nombreBuscar);
    while (fscanf(archivo, "%s %d", nombre, &puntaje) != EOF) {
        if (strcmp(nombre, nombreBuscar) == 0) {
            printf("El jugador %s tiene %d puntos.\n\n", nombre, puntaje);
            encontrado = 1;
        }
    }
    fclose(archivo);
    if (!encontrado) {
        printf("Jugador no encontrado.\n");
    }
    printf("\n");
}

int main() {
    int opcion;
    do {
        printf("1: Agregar jugador | 2: Mostrar top 10 | 3: Buscar jugador | 4: Salir\nIngrese su opcion: ");
        scanf("%d", &opcion);
        switch(opcion) {
            case 1:
                 cargar();
                 break;
            case 2:
                 mostrar();
                 break;
            case 3:
                 buscar();
                 break;
            case 4:
                 printf("Saliendo del programa.\n");
                 break;
            default:
                 printf("Opción no válida.\n\n");
                 break;
        }
    } while(opcion != 4);
    return 0;
}
