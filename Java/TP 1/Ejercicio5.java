import java.util.Scanner;

public class Ejercicio5{
	public static void main(String[] args){
		int num;
		Scanner scanner = new Scanner(System.in);
		do{
			System.out.print("Ingrese un número del 1 al 10: ");
			num = scanner.nextInt();
			if(num < 1 || num > 10){													// Validación de datos
				System.out.print("\nEl número ingresado no es del 1 al 10.\n\n\n");		// Informar que el número ingresado no es correcto
			}
		}while(num < 1 || num > 10);													// No salir si el número no está entre 1 y 10
		scanner.close();
		System.out.print("\nLa tabla de multiplicar de " + num + " es: ");
		for(int i = 1 ; i <= 10 ; i++){													// Ciclo desde 1 hasta 10
			System.out.print(num * i + " ");											// Imprimir el número multiplicado por i
		}
	}
}