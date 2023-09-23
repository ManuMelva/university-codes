// Calcular a média de 5 notas e classificá-las entre: A, B e C
// Sendo A: Passou em todas as provas.
// B: Passou em I, II e IV, mas não em III e V
// C: Passou em I e (II ou III ou IV) e não em V

import java.util.Scanner;

class Media{
	public static void main(String args[]){		
		
		Scanner scan = new Scanner(System.in);
		
		double I;
		double II;
		double III;
		double IV;
		double V;
	
		System.out.print("Digite sua nota no exame I: ");
		I = scan.nextDouble();
		System.out.print("Digite sua nota no exame II: ");
		II = scan.nextDouble();
		System.out.print("Digite sua nota no exame III: ");
		III = scan.nextDouble();
		System.out.print("Digite sua nota no exame IV: ");
		IV = scan.nextDouble();
		System.out.print("Digite sua nota no exame V: ");
		V = scan.nextDouble();
		
		if (I >= 70 && II >= 70 && III >= 70 && IV >= 70 && V >= 70){
			System.out.print("Sua classificacao final e: A");
		}else if (I >= 70 && II >= 70 && IV >= 70 && (III < 70 || V < 70)){
			System.out.print("Sua classificacao final e: B");
		}else if (I >= 70 && (II >= 70 || III >= 70 || IV >= 70) && V < 70){
			System.out.print("Sua classificacao final e: C");
		}else{
			System.out.print("Reprovado");
		}
	}
}
