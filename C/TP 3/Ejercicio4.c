#include <stdio.h>

void copiar(int *arreglo1, int *arreglo2, int cant1, int cant2, int pos){
	int i;
	for ( i = 0 ; i < cant2 ; i++ ){
		arreglo1[pos+i] = arreglo2[i];
	}
}

int main(){
	int cant1, cant2, pos;
	printf("Ingrese la cantidad de numeros a ingresar en el arreglo 1: ");
	scanf("%d",&cant1);
	int arreglo1[cant1], i;
	for( i = 0 ; i < cant1 ; i++ ){
		printf("Ingrese el numero %d: ",i+1);
		scanf("%d",&arreglo1[i]);
	}
	printf("El arreglo 1 es: ");
	for( i = 0 ; i < cant1 ; i++ ){
		printf("%d ",arreglo1[i]);
	}
	printf("\n\nIngrese la cantidad de numeros a ingresar en el arreglo 2: ");
	scanf("%d",&cant2);
	int arreglo2[cant2];
	for( i = 0 ; i < cant2 ; i++ ){
		printf("Ingrese el numero %d: ",i+1);
		scanf("%d",&arreglo2[i]);
	}
	printf("El arreglo 2 es: ");
	for( i = 0 ; i < cant2 ; i++ ){
		printf("%d ",arreglo2[i]);
	}
	do{
		printf("\n\nIngrese la posicion en el arreglo 1 desde la cual quiere copiar el arreglo 2: ");
		scanf("%d",&pos);
		if( (cant1 - cant2 - pos) < 0 ){
			printf("\nLa posicion ingresada supera los limites del arreglo 1.\n");
		}
	}while( (cant1 - cant2 - pos) < 0 );
	copiar(arreglo1, arreglo2, cant1, cant2, pos);
	printf("\nEl nuevo arreglo queda: ");
	for( i = 0 ; i < cant1 ; i++ ){
		printf("%d ",arreglo1[i]);
	}
	return 0;
}
