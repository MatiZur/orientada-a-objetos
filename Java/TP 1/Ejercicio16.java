import java.util.Scanner;

public class Ejercicio16{
	public static void main(String[] args){
		float lado1, lado2, lado3, iguales = 0;
		Scanner scanner = new Scanner(System.in);
		System.out.print("Ingrese la longitud del primer lado: ");
		lado1 = scanner.nextInt();
		System.out.print("Ingrese la longitud del segundo lado: ");
		lado2 = scanner.nextInt();
		System.out.print("Ingrese la longitud del tercer lado: ");
		lado3 = scanner.nextInt();
		scanner.close();
		if(lado1 == lado2){																	//
			iguales++;																		//
		}																					//
		if(lado1 == lado3){																	//
			iguales++;																		// Buscar coincidencias
		}																					//
		if(lado2 == lado3){																	//
			iguales++;																		//
		}																					//
		
		if(iguales == 0){																	// Si no hay coincidencias (todos los lados distintos)
			System.out.print("\nEl triángulo es escaleno (todos los lados diferentes).");	// Informar el tipo de triángulo
		}
		else if(iguales == 1){																// Si hay una sola coincidencia (dos lados son iguales)
			System.out.print("\nEl triángulo es isósceles (dos lados iguales).");			// Informar el tipo de triángulo
		}
		else if(iguales >= 2){																// Si hay más de una coincidencia (todos son iguales)
			System.out.print("\nEl triángulo es equilátero (todos los lados iguales).");	// Informar el tipo de triángulo
		}
	}
}