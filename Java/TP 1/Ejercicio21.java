import java.util.Scanner;

public class Ejercicio21{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		int[] numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};										// Arreglo que almacena los números enteros
		System.out.print("Ingrese un número: ");
		int mayores = 0, num = scanner.nextInt();												// Inicializo contador de mayores
		scanner.close();
		for(int numero : numeros){																// Por cada número en el arreglo de números
			if(numero > num){																	// Si el número actual es mayor al ingresado
				mayores++;																		// Sumarle 1 al contador
			}
		}
		System.out.print("\nHay " + mayores + " números en el arreglo mayores al ingresado.");	// Imprimir resultado
	}
}