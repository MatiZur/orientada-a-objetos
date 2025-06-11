import java.util.Scanner;

public class Ejercicio5{
	public static void main(String[] args){
		int num;
		Scanner scanner = new Scanner(System.in);
		do{
			System.out.print("Ingrese un n�mero del 1 al 10: ");
			num = scanner.nextInt();
			if(num < 1 || num > 10){													// Validaci�n de datos
				System.out.print("\nEl n�mero ingresado no es del 1 al 10.\n\n\n");		// Informar que el n�mero ingresado no es correcto
			}
		}while(num < 1 || num > 10);													// No salir si el n�mero no est� entre 1 y 10
		scanner.close();
		System.out.print("\nLa tabla de multiplicar de " + num + " es: ");
		for(int i = 1 ; i <= 10 ; i++){													// Ciclo desde 1 hasta 10
			System.out.print(num * i + " ");											// Imprimir el n�mero multiplicado por i
		}
	}
}