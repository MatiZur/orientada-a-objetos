import java.util.Scanner;

public class Ejercicio13{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		System.out.print("1. Fahrenheit a Celsius\n2. Celsius a Fahrenheit\nIngrese la dirección de la conversion: ");	// Imprimir menú
		int opcion = scanner.nextInt();																					// Variable para definir el tipo de conversión
		float fahrenheit, celsius;
		switch(opcion){																									// Qué hacer en función de la variable opcion
			case 1:																										// Si opción es 1 (Fahrenheit a Celsius)
				System.out.print("\n\nIngrese temperatura en Fahrenheit: ");
				fahrenheit = scanner.nextInt();
				celsius = (fahrenheit - 32) * 5 / 9;																	// Fórmula para pasar de Fahrenheit a Celsius
				System.out.print("\nEl valor de la temperatura en Celsius es " + celsius + ".");
				break;																									// Salir del caso
			case 2:																										// Si opción es 2 (Celsius a Fahrenheit)
				System.out.print("\n\nIngrese temperatura en Celsius: ");
				celsius = scanner.nextInt();
				fahrenheit = celsius * 9 / 5 + 32;																		// Fórmula para pasar de Celsius a Fahrenheit
				System.out.print("\nEl valor de la temperatura en Fahrenheit es " + fahrenheit + ".");
				break;																									// Salir del caso
			default:																									// Si opción no es ninguna de las anteriores
				System.out.print("\n\nOpción incorrecta.");																// Informar del error
				break;																									// Salir del caso
		}
		scanner.close();
	}
}