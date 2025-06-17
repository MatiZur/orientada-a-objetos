import java.util.Scanner;

public class Ejercicio18{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		System.out.print("Ingrese un número: ");
		int num = scanner.nextInt();
		scanner.close();
		System.out.print("\n");
		for(int j = 1 ; j <= num ; j++){			// Ciclo desde 1 hasta el número ingresado
			for(int i = 1 ; i <= j ; i++){			// Ciclo desde 1 hasta la línea actual
				System.out.print("*");				// Imprime un asterisco la misma cantidad de veces que el número de línea actual
			}
			System.out.print("\n");					// Salta de línea antes de pasar a la siguiente
		}
	}
}