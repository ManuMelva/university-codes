// Descobrir a qual quadrante um ponto informado pertence

import java.util.Scanner;

class Quadrante{
	public static void main(String args[]){		
		
		Scanner scan = new Scanner(System.in);
		
		int x;
		int y;

		System.out.print("Digite o valor de x: ");
		x = scan.nextInt();
		System.out.print("Digite o valor de y: ");
		y = scan.nextInt();
		
		if (x > 0 && y > 0){
			System.out.printf("O ponto (%d,%d) pertence ao primeiro quadrante.", x, y);
		}else if (x < 0 && y > 0){
			System.out.printf("O ponto (%d,%d) pertence ao segundo quadrante.", x, y);
		}else if (x < 0 && y < 0){
			System.out.printf("O ponto (%d,%d) pertence ao terceiro quadrante.", x, y);
		}else if (x > 0 && y < 0){
			System.out.printf("O ponto (%d,%d) pertence ao quarto quadrante.", x, y);
		}else if (x == 0){
			System.out.printf("O ponto (%d,%d) esta no eixo x", x, y);
		}else if (y == 0){
			System.out.printf("O ponto (%d,%d) esta no eixo y", x, y);
		}
	}
}
