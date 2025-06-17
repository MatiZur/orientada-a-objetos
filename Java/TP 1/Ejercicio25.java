import java.util.Scanner;

public class Ejercicio25{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		int opcion;
		float num1 = 0, num2 = 0, res = 0;												// Inicializamos las variables de los números y el resultado
		do{
			System.out.print("1. Suma\n2. Resta\n3. Multiplicación\n4. División\n5. Terminar programa\nIngrese la operación que desea realizar: ");
			opcion = scanner.nextInt();
			if(opcion >= 1 && opcion <= 4){												//
				System.out.print("\nIngrese el primer número: ");						//
				num1 = scanner.nextFloat();												// Pedimos los números si la opción elegida los requiere
				System.out.print("Ingrese el segundo número: ");						//
				num2 = scanner.nextFloat();												//
			}
			switch(opcion){																// Switch para las operaciones
				case 1:
					res = num1 + num2;													//
					System.out.print("\nLa suma es: " + res + "\n\n\n");				// Suma
					break;																//
				case 2:
					res = num1 - num2;													//
					System.out.print("\nLa resta es: " + res + "\n\n\n");				// Resta
					break;																//
				case 3:
					res = num1 * num2;													//
					System.out.print("\nLa multiplicación es: " + res + "\n\n\n");		// Multiplicación
					break;																//
				case 4:
					res = num1 / num2;													//
					System.out.print("\nLa división es: " + res + "\n\n\n");			// División
					break;																//
				case 5:
					System.out.print("\nTerminando programa...");						// Finalización del programa
					break;																//
				default:
					System.out.print("\nOpción inválida.\n\n\n");						// Opción elegida no válida
					break;																//
			}
		}while(opcion != 5);															// Repetir hasta que el usuario quiera salir
		scanner.close();
	}
}