import java.util.Scanner;

public class Ejercicio12{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		System.out.print("Ingrese un numero: ");
		int acum = 0, num = scanner.nextInt();
		String numero = Integer.toString(num);												// Pasamos el número a string para poder separarlo por caracteres
		scanner.close();
		int longitud = numero.length();														// Obtenemos la longitud de la cadena
		for(int i = 0 ; i < longitud ; i++){												// Ciclo para recorrer toda la cadena
			acum = acum + Character.getNumericValue(numero.charAt(i));						// Convertimos cada carácter de la cadena a int y lo sumamos al total
		}
		System.out.print("La suma de los dígitos del número ingresado es " + acum + ".");
	}
}