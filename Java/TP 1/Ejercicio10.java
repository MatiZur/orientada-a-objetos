import java.util.Scanner;

public class Ejercicio10{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		System.out.print("Ingrese un número entero no negativo: ");
		int num = scanner.nextInt();
		long fact = num;													// Lo declaro como long y no como int para que pueda trabajar con números más grandes
		scanner.close();
		for(int i = (num - 1) ; i > 0 ; i--){								// Ciclo desde el número ingresado menos 1 hasta 0 (no inclusive)
			fact = fact * i;												// Multiplicar acumulador por i
		}
		System.out.print("\nEl factorial de " + num + " es " + fact + ".");
	}
}