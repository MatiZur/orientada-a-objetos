#include <stdio.h>

int ocurrencias(int *numeros, int cant, int buscar){
	int i, cont=0;
	for( i = 0 ; i < cant ; i++ ){
		if(numeros[i] == buscar){
			cont++;
		}
	}
	return cont;
}

int main(){
	int cant, buscar;
	printf("Ingrese la cantidad de numeros a ingresar: ");
	scanf("%d",&cant);
	int numeros[cant], i;
	printf("\n");
	for( i = 0 ; i < cant ; i++ ){
		printf("Ingrese el numero %d: ",i+1);
		scanf("%d",&numeros[i]);
	}
	printf("El arreglo es: ");
	for( i = 0 ; i < cant ; i++ ){
		printf("%d ",numeros[i]);
	}
	printf("\n\nIngrese el numero a buscar: ");
	scanf("%d",&buscar);
	int cont = ocurrencias(numeros, cant, buscar);
	printf("\nEl numero %d aparece %d veces en el arreglo.",buscar,cont);
	return 0;
}
