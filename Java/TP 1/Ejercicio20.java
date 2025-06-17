import java.util.Scanner;
import java.util.Random;

public class Ejercicio20{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		Random random = new Random();
		System.out.print("Ingrese la longitud de la contraseña deseada: ");
		int tipo, longitud = scanner.nextInt();
		scanner.close();
		String minus = "abcdefghijklmnopqrstuvwxyz";
		String mayus = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		System.out.print("\n");
		for(int i = 0 ; i < longitud ; i++){
			tipo = random.nextInt(3);
			if(tipo == 0){
				System.out.print(random.nextInt(10));
			}
			else if(tipo == 1){
				System.out.print(minus.charAt(random.nextInt(26)));
			}
			else{
				System.out.print(mayus.charAt(random.nextInt(26)));
			}
		}
	}
}