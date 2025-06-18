import java.util.Scanner;
import java.util.Random;

public class Ejercicio24{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		Random random = new Random();
		int[] numeros = {random.nextInt(100) + 1, random.nextInt(100) + 1, random.nextInt(100) + 1, random.nextInt(100) + 1, random.nextInt(100) + 1};
		int ingresado, intentos = 0, encontrados = 0, restantes = 5, dif, cercaMen = 999, cercaMay = 999;
		System.out.print("Bienvenido a Adivinar el Número... versión 2. Se van a generar 5 números del 1 al 100 y tu objetivo es adivinarlos. ¡Buena suerte!\n\n");
		do{
			System.out.print("Ingrese un número: ");
			ingresado = scanner.nextInt();
			intentos++;
			for(int numero : numeros){
				if(ingresado < numero){
					dif = numero - ingresado;
					if(dif < cercaMay){
						cercaMay = dif;
					}
				}
				else if(ingresado == numero){
					encontrados++;
					restantes--;
					numero = 999;
				}
				else if(ingresado > numero){
					dif = ingresado - numero;
					if(dif < cercaMen){
						cercaMen = dif;
					}
				}
			}
			if(encontrados < 5){
				System.out.print("\nEncontraste " + encontrados + " número/s en total. " + restantes + " restantes.\n");
				if(cercaMen < cercaMay){
					System.out.print("El número más cercano es menor al ingresado.");
				}
				else if(cercaMen == cercaMay){
					System.out.print("Hay dos números a la misma distancia del ingresado.");
				}
				else if(cercaMen > cercaMay){
					System.out.print("El número más cercano es mayor al ingresado.");
				}
				System.out.print("\n\n\n");
			}
			cercaMen = 999;
			cercaMay = 999;
		}while(encontrados < 5);
		scanner.close();
		System.out.print("\n\n\n¡Felicitaciones! Adivinaste los 5 números en " + intentos + " intentos.");
	}
}