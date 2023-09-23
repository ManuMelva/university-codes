// Descobrir se um número é par ou ímpar

import java.util.Scanner;

class Par_Impar{
	public static void main(String args[]){		
		
		Scanner scan = new Scanner(System.in);
		
		int num;

		System.out.print("Digite o numero: ");
		num = scan.nextInt();
		
		if (num % 2 == 0){
			System.out.print("O numero e par");
		}
		else{
			System.out.print("O numero e impar");
		}
	}
}
