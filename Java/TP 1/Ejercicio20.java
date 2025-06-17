import java.util.Scanner;
import java.util.Random;

public class Ejercicio20{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		Random random = new Random();
		System.out.print("Ingrese la longitud de la contraseña deseada: ");
		int tipo, longitud = scanner.nextInt();
		scanner.close();
		String minus = "abcdefghijklmnopqrstuvwxyz";						// String para guardar todas las minusculas
		String mayus = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";						// String para guardar todas las minusculas
		System.out.print("\n");
		for(int i = 0 ; i < longitud ; i++){
			tipo = random.nextInt(3);										// Definimos el tipo de carácter aleatoriamente
			if(tipo == 0){													// Si el tipo es 0 va a ser un número
				System.out.print(random.nextInt(10));						// Generamos aleatoriamente un número entre 0 y 9
			}
			else if(tipo == 1){												// Si el tipo es 1 va a ser una letra minúscula
				System.out.print(minus.charAt(random.nextInt(26)));			// Generamos un número entre 0 y 25 y seleccionamos la letra en dicha posición en la cadena de minúsculas
			}
			else{															// Si el tipo es 2 va a ser una letra mayúscula
				System.out.print(mayus.charAt(random.nextInt(26)));			// Generamos un número entre 0 y 25 y seleccionamos la letra en dicha posición en la cadena de mayúsculas
			}
		}
	}
}