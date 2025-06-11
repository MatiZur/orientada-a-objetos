import java.util.Scanner;								// Importar scanner

public class Ejercicio3{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);		// Declarar scanner
		int num;										// Variable para el n�mero
		boolean primo;									// Variable para indicar si el n�mero es primo o no
		do{
			primo = true;								// Resetear booleano de primo
			System.out.print("Ingrese un n�mero: ");	// Pedir ingreso de datos
			num = scanner.nextInt();					// Llamar al scanner para leer valor
			for(int i = 2 ; i < (num / 2 + 1) ; i++){	// Iniciar ciclo desde 2 (1 siempre va a ser divisor) hasta la mitad del n�mero m�s 1 (para no hacer calculos innecesarios, ya que despu�s de la mitad no va a haber ningun divisor)
				if(num % i == 0){						// Si el resto de la divisi�n del n�mero por i da 0 (entonces i es divisor del n�mero)
					primo = false;						// El n�mero es no primo
					break;								// Salir del ciclo porque ya sabemos que es no primo
				}
			}
		}while(primo == false || num <= 100);			// No salir si el n�mero es no primo o menor o igual a 100
		scanner.close();								// Cerrar scanner
		System.out.print("\nTerminando programa...");
	}
}