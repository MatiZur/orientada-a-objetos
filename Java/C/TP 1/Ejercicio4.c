#include <stdio.h>
#include <math.h>
int opcion;
float cateto1, cateto2, hipotenusa;

main(){
	printf("Ingrese 1 para ingresar catetos y 2 para ingresar un cateto y la hipotenusa: ");
	scanf("%d",&opcion);
	if(opcion==1){
		printf("Ingrese medida del cateto 1: ");
		scanf("%f",&cateto1);
		printf("Ingrese medida del cateto 2: ");
		scanf("%f",&cateto2);
		hipotenusa=sqrt((cateto1*cateto1)+(cateto2*cateto2));
		printf("La hipotenusa es %f",hipotenusa);
	}
	else if(opcion==2){
		printf("Ingrese medida del cateto: ");
		scanf("%f",&cateto1);
		printf("Ingrese medida de la hipotenusa: ");
		scanf("%f",&hipotenusa);
		cateto2=sqrt((hipotenusa*hipotenusa)-(cateto1*cateto1));
		printf("El cateto restante es %f",cateto2);
	}
}
