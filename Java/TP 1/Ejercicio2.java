public class Ejercicio2{
	public static void main(String[] args){
		boolean noPrimo = false;					// Booleano para saber si i es no primo
		for(int i = 50 ; i < 101 ; i++){			// Iniciar ciclo de 50 iteraciones empezando desde 50 (de 50 hasta 100)
			for(int j = 2 ; j < (i / 2 + 1) ; j++){	// Iniciar ciclo desde 2 (1 siempre va a ser divisor) hasta la mitad del número más 1 (para no hacer calculos innecesarios, ya que después de la mitad no va a haber ningun divisor)
				if(i % j == 0){						// Si la resta de dividir el i por j da 0 (entonces j es divisor de i)
					noPrimo = true;					// Cambiamos booleano a verdadero (para hacer el salto de linea más tarde)
					System.out.print(j + " ");		// Imprimir divisor
				}
			}
			if(noPrimo == true){					// Si el numero no es primo
				System.out.print("\n");				// Salto de linea para separar numeros
			}
			else{									// Si es primo
				System.out.println("Primo");		// Imprimir "Primo"
			}
			noPrimo = false;						// Reiniciar booleano
		}
	}
}