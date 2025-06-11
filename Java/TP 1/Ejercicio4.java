import java.util.Scanner;

public class Ejercicio4{
	public static void main(String[] args){
		int N, impares = 0, pares = 0;				// Iniciar variables para almacenar el numero, la suma de los impares y la suma de los pares
		Scanner scanner = new Scanner(System.in);
		System.out.print("Ingrese un número: ");
		N = scanner.nextInt();
		scanner.close();
		for(int i = 1 ; i <= N ; i = i + 2){		// Iniciar ciclo en 1 y aumentar i en 2 hasta que sea mayor al número ingresado
			impares = impares + i;					// Acumulador de impares
		}
		for(int i = 2 ; i <= N ; i = i + 2){		// Iniciar ciclo en 2 y aumentar i en 2 hasta que sea mayor al número ingresado
			pares = pares + i;						// Acumulador de impares
		}
		System.out.print("\nLa suma de los impares desde 1 hasta " + N + " es " + impares + ".\nLa suma de los pares desde 2 hasta " + N + " es " + pares + ".");
	}
}