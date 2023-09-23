// Dia da semana correspondente com o número digitado

import java.util.Scanner;

class Dia_da_semana{
	public static void main(String args[]){		
		
		Scanner scan = new Scanner(System.in);
		
		int num;
	
		System.out.print("Digite um numero de 1 a 7: ");
		num = scan.nextInt();
		
		if (num == 0 || num > 7){
			System.out.print("Nao e um numero valido.");
		}else if (num == 1){
			System.out.print("Este numero corresponde ao domingo.");
		}else if (num == 2){
			System.out.print("Este numero corresponde a segunda-feira.");
		}else if (num == 3){
			System.out.print("Este numero corresponde a terca-feira.");
		}else if (num == 4){
			System.out.print("Este numero corresponde a quarta-feira.");
		}else if (num == 5){
			System.out.print("Este numero corresponde a quinta-feira.");
		}else if (num == 6){
			System.out.print("Este numero corresponde a sexta-feira.");
		}else if (num == 7){
			System.out.print("Este numero corresponde ao sabado.");
		}
	}
}
