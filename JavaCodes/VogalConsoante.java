// Descobrir se a letra é uma vogal ou consoante

import java.util.Scanner;

class Vogal_consoante{
	public static void main(String args[]){		
		
		Scanner scan = new Scanner(System.in);
		
		String letra = "";

		System.out.print("Digite uma letra em minusculo: ");
		letra = scan.nextLine().toLowerCase();
		
		if (letra.equals("a") || letra.equals("e") || letra.equals("i") || letra.equals("o") || letra.equals("u")){
			System.out.print("A letra e uma vogal.");
		}else
			System.out.print("A letra e uma consoante.");
	}
}
