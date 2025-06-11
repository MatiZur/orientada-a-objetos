import java.util.Random;
import java.util.Scanner;

public class Ejercicio8{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		Random random = new Random();																			// Declarar random
		int numero, intentos = 0, adivinar = random.nextInt(100) + 1;											// Generar un n�mero aleatorio entre 0 y 99 y sumarle 1 para que cumpla con la consigna (entre 1 a 100 inclusive)
		System.out.println("�Bienvenido a Adivina el N�mero! Se va a generar un n�mero del 1 al 100 y tu objetivo es adivinarlo.");
		do{
			System.out.print("\nIngrese un n�mero: ");
			numero = scanner.nextInt();
			intentos++;
			if(numero < adivinar){																				// Si el n�mero ingresado es menor
				System.out.print("El n�mero ingresado es menor al generado.\n");								// Dar pista
			}
			else if(numero == adivinar){																				// Si el n�mero es el generado
				System.out.print("\n�Felicidades! Acertaste el n�mero en " + intentos + " intento/s.");			// Mensaje de felicitaciones
			}
			else if(numero > adivinar){																				// Si el n�mero ingresado es mayor
				System.out.print("El n�mero ingresado es mayor al generado.\n");								// Dar pista
			}																					// Sumar un intento
		}while(numero != adivinar);																				// Repetir hasta adivinar el n�mero
		scanner.close();
	}
}