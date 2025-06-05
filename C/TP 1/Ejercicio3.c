#include <stdio.h>
#include <math.h>
float cateto1, cateto2, hipotenusa;

main(){
	printf("Ingrese medida del cateto 1: ");
	scanf("%f",&cateto1);
	printf("Ingrese medida del cateto 2: ");
	scanf("%f",&cateto2);
	hipotenusa=sqrt((cateto1*cateto1)+(cateto2*cateto2));
	printf("La hipotenusa es %f",hipotenusa);
}
