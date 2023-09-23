// Receber a Idade de uma pessoa em dias e transformar para anos, meses e dias

import java.util.Scanner;

class Calcular_Idade{
	public static void main(String args[]){		
		
		Scanner scan = new Scanner(System.in);
		
		int idade;
		float anos;
		float meses;
		float dias;

		System.out.print("Digite sua idade em dias: ");
		idade = scan.nextInt();
		
		anos = idade / 365;
		meses = (idade % 365.00) / 30.00;
		dias = (idade % 365) % 30;
		
		System.out.printf("A sua idade em anos, meses e dias e: %.0f ano(s), %.0f mes(es) e %.0f dia(s)", anos, meses, dias);
	}
}
