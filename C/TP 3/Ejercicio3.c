#include <stdio.h>

void ordenar(int *numeros, int cant){
	int aux, i, j;
	for( i = 0 ; i < cant - 1 ; i++ ){
		for( j = i + 1 ; j < cant ; j++ ){
			if(numeros[i] > numeros[j]){
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
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
	ordenar(numeros, cant);
	printf("El mayor numero ingresado es el %d y el menor es el %d.",numeros[cant-1],numeros[0]);
	return 0;
}
