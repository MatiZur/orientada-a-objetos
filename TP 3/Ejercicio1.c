#include <stdio.h>

void invertir(float *a, float *b){
	float aux;
	
	aux=*a;
	*a=*b;
	*b=aux;
	printf("\nLos valores invertidos son:\nValor 1: %f | Valor 2: %f",*a,*b);
}

int main(){
	float a, b;
	
	printf("Ingrese un valor: ");
	scanf("%f",&a);
	printf("Ingrese otro valor: ");
	scanf("%f",&b);
	printf("\nLos valores originales son:\nValor 1: %f | Valor 2: %f",a,b);
	invertir(&a,&b);
	
	return 0;
}
