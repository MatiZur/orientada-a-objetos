import java.util.Scanner;

public class Ejercicio11{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		System.out.print("Ingrese un año: ");
		int anio = scanner.nextInt();
		scanner.close();
		if(anio % 4 == 0){
			if(anio % 100 == 0){
				if(anio % 400 == 0){								// Si el año es divisible por 4, 100 y 400, es bisiesto
					System.out.print("\nEl año es bisiesto.");
				}
				else{												// Si es divisible por 4 y 100 pero no por 400, no es bisiesto
					System.out.print("\nEl año no es bisiesto.");
				}
			}
			else{													// Si es divisible por 4 pero no por 100, es bisiesto
				System.out.print("\nEl año es bisiesto.");
			}
		}
		else{														// Si no es divisible por 4, no es bisiesto
			System.out.print("\nEl año no es bisiesto.");
		}
	}
}