import java.util.Scanner;

public class Ejercicio3{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		int num;
		boolean primo;
		do{
			primo = true;
			System.out.print("Ingrese un número: ");
			num = scanner.nextInt();
			if(num == 1){
				primo = false;
			}
			else{
				for(int i = 2 ; i < (num / 2 + 1) ; i++){
					if(num % i == 0){
						primo = false;
						break;
					}
				}
			}
		}while(primo == false || num <= 100);
		scanner.close();
		System.out.print("\nTerminando programa...");
	}
}