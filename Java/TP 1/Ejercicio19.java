import java.util.Random;

public class Ejercicio19{
	public static void main(String[] args){
		Random random = new Random();														// Declaro la función random
		int dado1 = random.nextInt(6) + 1;													// Genero valor del 0 al 5 y le sumo 1 al dado 1
		int dado2 = random.nextInt(6) + 1;													// Genero valor del 0 al 5 y le sumo 1 al dado 2
		int suma = dado1 + dado2;															// Sumar los dados
		System.out.print("Dado 1: " + dado1 + "\nDado 2: " + dado2 + "\n\nSuma: " + suma);
	}
}