import java.util.Scanner;

public class Ejercicio17{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		System.out.print("Ingrese una frase: ");
		String frase = scanner.nextLine();
		scanner.close();
		int palabras = 1, longitud = frase.length();								// Iniciamos palabras en 1 ya que siempre va a tener una palabra
		for(int i = 0 ; i < longitud ; i++){										// Escaneamos toda la cadena
			if(frase.charAt(i) == ' '){												// Si el carácter actual es un espacio => Hay una nueva palabra
				palabras++;															// Sumar nueva palabra
			}
		}
		System.out.print("\nLa frase ingresada tiene " + palabras + " palabras.");
	}
}