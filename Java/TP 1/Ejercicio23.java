import java.util.Scanner;

public class Ejercicio23{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		String[] ciudades = {"Madrid", "Venecia", "Tokio", "Sydney", "Londres"};							// Arreglo con las 5 ciudades
		boolean encontrado = false;																			// Booleano para saber si la ciudad se encontró
		System.out.print("Ingrese una ciudad para buscar entre las almacenadas (empiece con mayúscula): ");
		String buscar = scanner.nextLine();
		scanner.close();
		for(String ciudad : ciudades){																		// Por cada ciudad en el arreglo de ciudades
			if(buscar.compareTo(ciudad) == 0){																// Si las cadenas son exactamente iguales
				encontrado = true;																			// Entonces encontró la ciudad
				break;																						// Salir del for porque ya se encontró
			}
		}
		if(encontrado){																						// Si se encontró
			System.out.print("\nSe encontró la ciudad");													// Imprimir resultado
		}
		else{																								// Si no se encontró
			System.out.print("\nNo se encontró la ciudad");													// Imprimir resultado
		}
	}
}