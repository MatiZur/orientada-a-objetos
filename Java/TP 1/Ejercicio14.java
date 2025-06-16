import java.util.Scanner;

public class Ejercicio14{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		System.out.print("Ingrese un número: ");
		int longitud = scanner.nextInt();
		scanner.close();
		System.out.println("\nLa secuencia de Fibonacci hasta el término " + longitud + " es:");
		if(longitud < 2){																			//
			if(longitud < 1){																		//
				System.out.print("Error: El número tiene que ser mayor a 0.");						//
			}																						// Fuerzo la impresión si se ingresa 1 o menor, ya que no utilizan la función
			else{																					// Además añado un mensaje de error si el número es 0 o menor
				System.out.print("0");																//
			}																						//
		}																							//
		else{
			int[] fibonacci = new int[longitud];													// Declaro array con longitud del número ingresado
			fibonacci[0] = 0;																		// Cargo el primer término (0)
			fibonacci[1] = 1;																		// Cargo el segundo término (1)
			System.out.print("0 1");																// Imprimo los primeros dos valores que, debido a que estamos en un else de un if anterior, siempre van a salir
			for(int i = 2 ; i < longitud ; i++){													// Ciclo desde 2 hasta longitud
				fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];										// Secuencia de Fibonacci
				System.out.print(" " + fibonacci[i]);												// Imprimo término actual
			}
		}
	}
}