import java.util.Scanner;
import java.util.Random;

public class Ejercicio24{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);																														// Declara escáner
		Random random = new Random();																																	// Declara random
		int[] numeros = {random.nextInt(100) + 1, random.nextInt(100) + 1, random.nextInt(100) + 1, random.nextInt(100) + 1, random.nextInt(100) + 1};					// Genera 5 números del 1 al 100 en el arreglo números
		int ingresado, intentos = 0, encontrados = 0, restantes = 5, dif, cercaMen = 999, cercaMay = 999;																// Inicializa contadores de intentos y números encontrados en 0, números restantes en 5 y la diferencia con los dos números más cercanos en 999
		boolean encontrado = false;																																		// Booleano para "sacar" los números adivinados más tarde
		System.out.print("Bienvenido a Adivinar el Número... versión 2. Se van a generar 5 números del 1 al 100 y tu objetivo es adivinarlos. ¡Buena suerte!\n\n");		// Mensaje de bienvenida
		do{
			System.out.print("Ingrese un número: ");																													// Pide el ingreso de un número entero
			ingresado = scanner.nextInt();																																// Se ingresa un número
			intentos++;																																					// Se suma 1 a los intentos
			for(int numero : numeros){																																	// Por cada número generado en el arreglo números:
				if(ingresado < numero){																																	// Si el número ingresado es menor al generado
					dif = numero - ingresado;																															// Calcula la diferencia
					if(dif < cercaMay){																																	// Si la diferencia del número actual es menor a la total registrada en este número ingresado
						cercaMay = dif;																																	// La menor diferencia registrada pasa a ser la diferencia actual
					}
				}
				else if(ingresado == numero){																															// Si el número ingresado es igual al generado
					encontrados++;																																		// Aumentar los números adivinados en 1
					restantes--;																																		// Restar los restantes en 1
					encontrado = true;																																	// Cambiar booleano de encontrado a verdadero
				}
				else if(ingresado > numero){																															// Si el número ingresado es mayor al generado
					dif = ingresado - numero;																															// Calcula la diferencia
					if(dif < cercaMen){																																	// Si la diferencia del número actual es menor a la total registrada en este número ingresado
						cercaMen = dif;																																	// La menor diferencia registrada pasa a ser la diferencia actual
					}
				}
			}																																							// Cierra bucle for-each
			if(encontrado){																																				// Si se encontró algún número
				for(int i = 0 ; i < numeros.length ; i++){																												// Por cada número del arreglo números
					if(ingresado == numeros[i]){																														// Si el generado es igual al ingresado
						numeros[i] = 999;																																// Cambia el número generado a 999
					}
				}
			}
			if(encontrados < 5){																																		// Si el usuario todavia no encontró los 5 números
				System.out.print("\nEncontraste " + encontrados + " número/s en total. " + restantes + " restantes.\n");												// Informa los encontrados y los restantes
				if(cercaMen < cercaMay){																																// Si la diferencia del más cercano menor es menor al más cercano mayor
					System.out.print("El número más cercano es menor al ingresado.");																					// Informa que el más cercano es menor al ingresado
				}
				else if(cercaMen == cercaMay){																															// Si ambos números cercanos tienen la misma diferencia
					System.out.print("Hay dos números a la misma distancia del ingresado.");																			// Informa que ambos están a la misma distancia del ingresado
				}
				else if(cercaMen > cercaMay){																															// Si la diferencia del más cercano menor es mayor al más cercano mayor
					System.out.print("El número más cercano es mayor al ingresado.");																					// Informa que el más cercano es mayor al ingresado
				}
				System.out.print("\n\n\n");
			}
			cercaMen = 999;																																				// Reinicio de variables
			cercaMay = 999;																																				// Reinicio de variables
			encontrado = false;																																			// Reinicio de variables
		}while(encontrados < 5);																																		// Repetir hasta encontrar los 5 números
		scanner.close();																																				// Cierra escáner
		System.out.print("\n\n\n¡Felicitaciones! Adivinaste los 5 números en " + intentos + " intentos.");																// Mensaje de despedida, informando también la cantidad de intentos
	}
}