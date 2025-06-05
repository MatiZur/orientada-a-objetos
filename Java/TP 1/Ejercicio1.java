public class Ejercicio1{
	public static void main(String[] args){
		for(int i = 1 ; i < 101 ; i++){		// Iniciar ciclo de 100 iteraciones empezando desde 1
			if(i % 2 != 0){					// Si la resta de dividir i por 2 no da 0 (si es impar)
				System.out.println(i);		// Imprimir i
			}
			else{							// Si no ocurre lo anterior (la resta de i divido 2 da 0, es par)
				System.out.println("Par");	// Imprimir "Par"
			}
		}
	}
}