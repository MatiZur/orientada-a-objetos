#include <stdio.h>

int promedio(int cant, int *numeros){
	float suma=0, prom;
	int i;
	
	for(i=0 ; i<cant ; i++){
		suma=suma+numeros[i];
	}
	prom=suma/cant;
	printf("\nEl promedio es igual a %f.",prom);
}

int main(){
	int cant;
	
	printf("Ingrese la cantidad de numeros a ingresar: ");
	scanf("%d",&cant);
	
	int numeros[cant], i;
	
	for(i=0 ; i<cant ; i++){
		printf("Ingrese el numero %d: ",i+1);
		scanf("%d",&numeros[i]);
	}
	promedio(cant, numeros);
	
	return 0;
}
