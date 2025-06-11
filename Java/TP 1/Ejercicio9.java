import java.util.Scanner;

public class Ejercicio9 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int num1, num2, num3;
		System.out.print("Ingrese el primer número: ");
		num1 = scanner.nextInt();
		System.out.print("Ingrese el segundo número: ");
		num2 = scanner.nextInt();
		System.out.print("Ingrese el tercer número: ");
		num3 = scanner.nextInt();
		scanner.close();
		if(num1 > num2){															// Se fija si el primer número es mayor al segundo
			if(num1 > num3){														// Si se cumple lo anterior, se fija si el primer número es mayor al tercero
				System.out.print("\nEl primer número (" + num1 + ") es el mayor.");	// Si se cumple todo lo anterior, el primero es el mayor
			}
			else{																	// Si el primero es mayor al segundo pero no al tercero
				System.out.print("\nEl tercer número (" + num3 + ") es el mayor.");	// El tercero es el mayor
			}
		}
		else if(num2 > num3){														// Si el segundo número es mayor al primero, se fija si el segundo es mayor al tercero
			System.out.print("\nEl segundo número (" + num2 + ") es el mayor.");	// Si se cumple lo anterior, el segundo número es el mayor
		}
		else{																		// Si el tercero es mayor que el segundo, sabiendo que el segundo es mayor al primero, sabemos que el tercero es el mayor
			System.out.print("\nEl tercer número (" + num3 + ") es el mayor.");
		}
	}
}