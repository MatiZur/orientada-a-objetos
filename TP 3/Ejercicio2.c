#include <stdio.h>

float promedio(int cant, int *numeros){
	float suma = 0;
	int i;
	for( i = 0 ; i < cant ; i++ ){
		suma+=numeros[i];
	}
	float prom = suma / cant;
	return prom;
}

int main(){
	int cant;
	printf("Ingrese la cantidad de numeros a ingresar: ");
	scanf("%d",&cant);
	int numeros[cant], i;
	for( i = 0 ; i < cant ; i++ ){
		printf("Ingrese el numero %d: ",i+1);
		scanf("%d",&numeros[i]);
	}
	float prom = promedio(cant, numeros);
	printf("\nEl promedio es igual a %f.",prom);
	return 0;
}
