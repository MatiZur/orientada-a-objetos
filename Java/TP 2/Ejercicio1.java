public class Ejercicio1{					// Iniciar la clase Ejercicio1
	public static void main(String[] args){	// Iniciar la funci�n main
		for(int i = 1 ; i < 101 ; i++){		// Iniciar ciclo de 1 hasta 100
			if(i % 2 != 0){					// Si la resta de dividir i por 2 no da 0 (si es impar)
				System.out.println(i);		// Imprimir i
			}								// Cerrar if
			else{							// Si no ocurre lo anterior (la resta de i divido 2 da 0, es par)
				System.out.println("Par");	// Imprimir "Par"
			}								// Cerrar else
		}									// Cerrar ciclo
	}										// Cerrar funci�n
}											// Cerrar clase