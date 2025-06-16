import java.util.Scanner;

public class Ejercicio15{
	public static void main(String[] args){
		int opcion, saldo = 1000, cajero = 0, depo, reti;																					// Iniciar el saldo en 1000 y el del cajero en 0
		Scanner scanner = new Scanner(System.in);
		do{
			System.out.print("1. Depósito\n2. Retiro\n3. Consulta de saldo\n4. Salir\nIngrese su opción: ");
			opcion = scanner.nextInt();
			switch(opcion){
				case 1:																														// Si quiere depositar
					System.out.print("\nIngrese la cantidad que desea depositar: ");
					depo = scanner.nextInt();
					if(depo > saldo){																										// Si la cantidad que quiere depositar es mayor a la posible
						System.out.print("\nError: No dispone del saldo suficiente en la tarjeta para realizar la transferencia.\n\n\n");	// Informar la situación
					}
					else{																													// Si tiene el saldo para depositar
						saldo = saldo - depo;																								// Restar al saldo lo deseado
						cajero = cajero + depo;																								// Sumar al cajero lo deseado
						System.out.print("\nEl dinero ha sido depositado.\n\n\n");															// Informar la situación
					}
					break;
				case 2:																														// Si quiere retirar
					System.out.print("\nIngrese la cantidad que desea retirar: ");
					reti = scanner.nextInt();
					if(reti > cajero){																										// Si la cantidad que quiere retirar es mayor a la posible
						System.out.print("\nError: No dispone del saldo suficiente en el cajero para realizar la transferencia.\n\n\n");	// Informar la situación
					}
					else{																													// Si tiene el saldo para retirar
						saldo = saldo + reti;																								// Sumar al saldo lo deseado
						cajero = cajero - reti;																								// Restar al cajero lo deseado
						System.out.print("\nEl dinero ha sido retirado.\n\n\n");															// Informar la situación
					}
					break;
				case 3:																														// Si quiere resultar
					System.out.print("\nUsted dispone de " + saldo + " pesos en la tarjeta y " + cajero + " pesos en el cajero.\n\n\n");
					break;
				case 4:																														// Si quiere salir
					System.out.print("\n¡Adiós!");																							// Mensaje de despedida
					break;
				default:																													// Opción inválida
					System.out.print("\nOpción inválida. Vuelva a intentarlo.\n\n");														// Informar el error
					break;
			}
		}while(opcion != 4);																												// Repetir hasta que el usuario quiera salir
		scanner.close();
	}
}