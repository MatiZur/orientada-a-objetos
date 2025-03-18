#include <stdio.h>
char nombre[12], apellido[12];
int diaNac, mesNac, anioNac, dni, anio=2025, diaElec=30, mesElec=9, edad;
main(){
	printf("Ingrese su nombre: ");
	scanf("%s",&nombre);
	printf("Ingrese su apellido: ");
	scanf("%s",&apellido);
	printf("Ingrese su fecha de nacimiento (dia, mes y anio, separados por un espacio): ");
	scanf("%d %d %d",&diaNac,&mesNac,&anioNac);
	printf("Ingrese su DNI: ");
	scanf("%d",&dni);
	edad=anio-anioNac;
	if(mesNac<=mesElec){
		if(mesNac=mesElec){
			if(diaNac<diaElec){
				edad--;
			}
		}
		else{
			edad--;
		}
	}
	printf("\n%s, %s de DNI %d ",apellido,nombre,dni);
	if(edad<16){
		printf("no puede");
	}
	else if(edad>=16 && edad <18){
		printf("puede");
	}
	else if(edad>=18 && edad<80){
		printf("debe");
	}
	else{
		printf("puede");
	}
	printf(" votar.");
}
