import java.util.Scanner;

public class Ejercicio4{
	public static void main(String[] args){
		int N, impares = 0, pares = 0;
		Scanner scanner = new Scanner(System.in);
		System.out.print("Ingrese un número: ");
		N = scanner.nextInt();
		scanner.close();
		for(int i = 1 ; i <= N ; i = i + 2){
			impares = impares + i;
		}
		for(int i = 2 ; i <= N ; i = i + 2){
			pares = pares + i;
		}
		System.out.print("\nLa suma de los impares desde 1 hasta " + N + " es " + impares + ".\nLa suma de los pares desde 2 hasta " + N + " es " + pares + ".");
	}
}