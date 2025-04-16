#include <stdio.h>

void invertir(int *a, int *b){
	int aux=*a;
	*a=*b;
	*b=aux;
}

int main(){
	int a, b;
	printf("Ingrese un valor: ");
	scanf("%d",&a);
	printf("Ingrese otro valor: ");
	scanf("%d",&b);
	printf("\nLos valores originales son:\nValor 1: %d | Valor 2: %d",a,b);
	invertir(&a,&b);
	printf("\nLos valores invertidos son:\nValor 1: %d | Valor 2: %d",a,b);
	return 0;
}
