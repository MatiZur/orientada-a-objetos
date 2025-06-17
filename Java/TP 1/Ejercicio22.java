import java.util.Scanner;

public class Ejercicio22{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		double[] calificaciones = new double[5];									// Declaro arreglo que va a contener las calificaciones
		double acum = 0;															// Declaro acumulador para luego realizar el promedio
		int cont = 0;																// Declaro contador para diferenciar las calificaciones
		for(double calificacion : calificaciones){									// Por cada calificación:
			cont++;																	// Aumentar en 1 el contador
			System.out.print("Ingrese la calificación " + cont + ": ");				// Pedir el ingreso de la calificación
			calificacion = scanner.nextDouble();									// Leer la calificación
			acum = acum + calificacion;												// Sumar la calificación al total
		}
		scanner.close();															// Cerrar el scanner
		double prom = acum / 5;														// Calcular promedio
		System.out.print("\nEl promedio de las calificaciones es " + prom + ".");	// Imprimir resultado
	}
}