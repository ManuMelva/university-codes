// Soma dos dois maiores números

import java.util.Scanner;

class Soma{
	public static void main(String args[]){		
		
		Scanner scan = new Scanner(System.in);
		
		int num1;
		int num2;
		int num3;
		int soma;
	
		System.out.print("Digite o primeiro numero: ");
		num1 = scan.nextInt();
		System.out.print("Digite o segundo numero: ");
		num2 = scan.nextInt();
		System.out.print("Digite o terceiro numero: ");
		num3 = scan.nextInt();
		
		if ((num1 > num2 || num1 > num3) && (num2 > num3)){
			soma = num1 + num2;
			System.out.printf("A soma de %d e %d e igual a: %d", num1, num2, soma);
		}else if ((num1 > num2 || num1 > num3) && (num3 > num2)){
			soma = num1 + num3;
			System.out.printf("A soma de %d e %d e igual a: %d", num1, num3, soma);
		}else if ((num2 > num1 || num2 > num3) && (num3 > num1)){
			soma = num2 + num3;
			System.out.printf("A soma de %d e %d e igual a: %d", num2, num3, soma);
		}
	}
}
