import java.util.Scanner;

public class Ejercicio6{
	public static void main(String[] args){
		String frase;								// Declarar variable para la frase/palabra
		Scanner scanner = new Scanner(System.in);
		System.out.print("Ingrese una frase: ");
		frase = scanner.nextLine();					// Leer frase/palabra
		scanner.close();
		int longitud = frase.length() - 1;			// Leer la longitud de la frase/palabra y restar 1
		for(int i = longitud ; i >= 0 ; i--){		// Iniciar ciclo desde el ultimo caracter y restar 1 a i hasta que sea menor a 0
			System.out.print(frase.charAt(i));		// Imprimir caracter en el valor i del string
		}
	}
}