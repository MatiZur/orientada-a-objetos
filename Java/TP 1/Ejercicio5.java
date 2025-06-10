import java.util.Scanner;

public class Ejercicio5{
	public static void main(String[] args){
		int num;
		Scanner scanner = new Scanner(System.in);
		do{
			System.out.print("Ingrese un número del 1 al 10: ");
			num = scanner.nextInt();
			if(num < 1 || num > 10){
				System.out.print("\nEl número ingresado no es del 1 al 10.\n\n\n");
			}
		}while(num < 1 || num > 10);
		scanner.close();
		System.out.print("\nLa tabla de multiplicar de " + num + " es: " + num + " ");
		for(int i = 2 ; i < 11 ; i++){
			System.out.print(num * i + " ");
		}
	}
}