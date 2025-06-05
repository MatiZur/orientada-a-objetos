#include <stdio.h>
int N, i=0, j, k, prim=0, cont1=0, cont2=0, cont3=0, contNum=0, aux, impar=0, par=0;

main(){
	printf("Ingrese cantidad de numeros a ingresar: ");
	scanf("%d",&N);
	int numeros[N], primos[N], impares[N], pares[N];
	printf("\n");
	for(i=0;i<N;i++){
		printf("Ingrese el numero %d: ",i+1);
		scanf("%d",&numeros[i]);
	}
	for(i=0;i<N;i++){
		prim=1;
		for(k=2;k<numeros[i];k++){
			if(numeros[i] % k == 0){
				prim=0;
				break;
			}
		}
		if(prim==1){
			primos[cont1]=numeros[i];
			cont1=cont1+1;
		}
	}
	for(i=0;i<N;i++){
		impar=0;
		par=0;
		if(numeros[i] % 2 == 0){
			par=1;
		}
		else if(numeros[i] % 2 == 1){
			impar=1;
		}
		if(impar==1){
			impares[cont2]=numeros[i];
			cont2=cont2+1;
		}
		if(par==1){
			pares[cont3]=numeros[i];
			cont3=cont3+1;
		}
	}
	for(j=1;j<cont1;j++){
		for(i=0;i<cont1-j;i++){
			if(primos[i]>primos[i+1]){
				aux=primos[i];
				primos[i]=primos[i+1];
				primos[i+1]=aux;
			}
		}
	}
	for(j=1;j<cont2;j++){
		for(i=0;i<cont2-j;i++){
			if(impares[i]<impares[i+1]){
				aux=impares[i];
				impares[i]=impares[i+1];
				impares[i+1]=aux;
			}
		}
	}
	for(j=1;j<cont3;j++){
		for(i=0;i<cont3-j;i++){
			if(pares[i]>pares[i+1]){
				aux=pares[i];
				pares[i]=pares[i+1];
				pares[i+1]=aux;
			}
		}
	}
	printf("\nLos numeros primos, ordenados de menor a mayor, quedan: ");
	for(i=0;i<cont1;i++){
		printf("%d ",primos[i]);
	}
	printf("\nLos numeros impares, ordenados de mayor a menor, quedan: ");
	for(i=0;i<cont2;i++){
		printf("%d ",impares[i]);
	}
	printf("\nLos numeros pares, ordenados de menor a mayor, quedan: ");
	for(i=0;i<cont3;i++){
		printf("%d ",pares[i]);
	}
}
