// Calcular o Quociente e o Resto da Divisão

import java.util.Scanner;

class Divisao{
	public static void main(String args[]){		
		
		Scanner scan = new Scanner(System.in);
		
		int valor1;
		int valor2;
		double quociente = 0;
		double resto_da_divisao = 0;
		
		System.out.print("Digite o valor 1: ");
		valor1 = scan.nextInt();
		System.out.print("Digite o valor 2: ");
		valor2 = scan.nextInt();
		
		quociente = valor1 / valor2;
		resto_da_divisao = valor1 % valor2;
		
		System.out.printf("O quociente da divisao e: %.2f\nO resto da divisao e: %.2f", quociente, resto_da_divisao);
	}
}
