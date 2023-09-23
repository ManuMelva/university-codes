import java.util.Scanner;

class CalcularIMC{
	public static void main(String args[]){
		
		Scanner scan = new Scanner(System.in);
		int numero_pessoas;
		double peso;
		double altura;
		double IMC = 0;
		
		System.out.print("Digite o numero de pessoas que deseja calcular o IMC: ");
		numero_pessoas = scan.nextInt();
		
		for(int i = 1; i <= numero_pessoas; i++){
			System.out.print("Digite o seu peso em Kg: ");
			peso = scan.nextDouble();
			System.out.print("Digite a sua altura em m: ");
			altura = scan.nextDouble();
			IMC = peso/(altura * altura);
			if(IMC > 16 && IMC < 18.5){
				System.out.printf("Seu IMC e %.2f e voce esta na categoria subpeso\n", IMC);
			}
			else if(IMC >= 18.5 && IMC < 25){
				System.out.printf("Seu IMC e %.2f e voce esta na categoria normal\n", IMC);
			}
			else if(IMC >= 25 && IMC < 40){
				System.out.printf("Seu IMC e %.2f e voce esta na categoria sobrepeso\n", IMC);
			}
		}
	}
}
