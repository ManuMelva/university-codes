// Calcular a área de um quadrado

import java.util.Scanner;

class Calcular_Area{
	public static void main(String args[]){		
		
		Scanner scan = new Scanner(System.in);
		
		int lado;
		int area;
		
		System.out.print("Digite o lado: ");
		lado = scan.nextInt();
		
		area = lado * lado;
		
		System.out.printf("A area do quadrado e: %d", area);
	}
}
