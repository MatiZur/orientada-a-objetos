import java.util.Random;
import java.util.Scanner;

public class Ejercicio8{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		Random random = new Random();																			// Declarar random
		int numero, intentos = 0, adivinar = random.nextInt(100) + 1;											// Iniciar variable de intentos y generar un nero aleatorio entre 0 y 99 y sumarle 1 para que cumpla con la consigna (entre 1 a 100 inclusive)
		System.out.println("¡Bienvenido a Adivina el Número! Se va a generar un número del 1 al 100 y tu objetivo es adivinarlo.");
		do{
			System.out.print("\nIngrese un nero: ");
			numero = scanner.nextInt();
			intentos++;																							// Sumar un intento
			if(numero < adivinar){																				// Si el nero ingresado es menor
				System.out.print("El nero ingresado es menor al generado.\n");								// Dar pista
			}
			else if(numero == adivinar){																		// Si el nero es el generado
				System.out.print("\n；elicidades! Acertaste el nero en " + intentos + " intento/s.");			// Mensaje de felicitaciones
			}
			else if(numero > adivinar){																			// Si el nero ingresado es mayor
				System.out.print("El nero ingresado es mayor al generado.\n");								// Dar pista
			}
		}while(numero != adivinar);																				// Repetir hasta adivinar el nero
		scanner.close();
	}
}
