import java.util.Scanner;								// Importar scanner

public class Ejercicio3{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);		// Declarar scanner
		int num;										// Variable para el número
		boolean primo;									// Variable para indicar si el número es primo o no
		do{
			primo = true;								// Resetear booleano de primo
			System.out.print("Ingrese un número: ");	// Pedir ingreso de datos
			num = scanner.nextInt();					// Llamar al scanner para leer valor
			for(int i = 2 ; i < (num / 2 + 1) ; i++){	// Iniciar ciclo desde 2 (1 siempre va a ser divisor) hasta la mitad del número más 1 (para no hacer calculos innecesarios, ya que después de la mitad no va a haber ningun divisor)
				if(num % i == 0){						// Si el resto de la división del número por i da 0 (entonces i es divisor del número)
					primo = false;						// El número es no primo
					break;								// Salir del ciclo porque ya sabemos que es no primo
				}
			}
		}while(primo == false || num <= 100);			// No salir si el número es no primo o menor o igual a 100
		scanner.close();								// Cerrar scanner
		System.out.print("\nTerminando programa...");
	}
}