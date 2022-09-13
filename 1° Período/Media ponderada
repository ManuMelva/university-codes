// Media ponderada onde o maior número tem peso 5 e os menores tem peso 2.5

import java.util.Scanner;

class Media_ponderada{
	public static void main(String args[]){		
		
		Scanner scan = new Scanner(System.in);
		
		double num1;
		double num2;
		double num3;
		double media = 0;
	
		System.out.print("Digite o primeiro numero: ");
		num1 = scan.nextDouble();
		System.out.print("Digite o segundo numero: ");
		num2 = scan.nextDouble();
		System.out.print("Digite o terceiro numero: ");
		num3 = scan.nextDouble();
		
		if (num1 > num2 && num1 > num3){
			media = (num1 * 5 + num2 * 2.5 + num3 * 2.5) / 10.0;
			System.out.printf("A media e: %.2f", media);
		}else if (num2 > num1 && num2 > num3){
			media = (num2 * 5 + num1 * 2.5 + num3 * 2.5) / 10.0;
			System.out.printf("A media e: %.2f", media);
		}else if (num3 > num1 && num3 > num2){
			media = (num3 * 5 + num2 * 2.5 + num1 * 2.5) / 10.0;
			System.out.printf("A media e: %.2f", media);
		}else if (num1 == num3){
			media = (num3 * 5 + num2 * 2.5 + num1 * 5) / 12.5;
			System.out.printf("A media e: %.2f", media);
		}else if (num1 == num2){
			media = (num3 * 2.5 + num2 * 5 + num1 * 5) / 12.5;
			System.out.printf("A media e: %.2f", media);
		}else if (num3 == num2){
			media = (num3 * 5 + num2 * 5 + num1 * 2.5) / 12.5;
			System.out.printf("A media e: %.2f", media);
		}
	}
}
