import java.util.Scanner;

public class Ejercicio7{
	public static void main(String[] args){
		String frase;
		Scanner scanner = new Scanner(System.in);
		System.out.print("Ingrese una frase: ");
		frase = scanner.nextLine();
		scanner.close();
		int vocales = 0, consonantes = 0, longitud = frase.length();	// Iniciar contadores de vocales, consonantes y para almacenar la longitud de la cadena
		String minuscula = frase.toLowerCase();							// Pasar la frase a minúscula para facilitar el chequeo
		for(int i = 0 ; i < longitud ; i++){
			if(minuscula.charAt(i) == 'a' || minuscula.charAt(i) == 'e' || minuscula.charAt(i) == 'i' || minuscula.charAt(i) == 'o' || minuscula.charAt(i) == 'u'){
				vocales++;												// Si el carácter en i es a, e, i, o, u sumar 1 al contador de vocales
			}
			else if(minuscula.charAt(i) == ' '){
																		// Si el carácter es un espacio, no hacer nada. Acá también se podrían agregar otros signos
			}
			else{
				consonantes++;											// Si el carácter no es ninguna de las anteriores, sumar 1 al contador de consonantes
			}
		}
		System.out.print("\nLa frase \"" + frase + "\" tiene " + vocales + " vocales y " + consonantes + " consonantes.");
	}
}