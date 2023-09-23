// Mostrar a quantidade de dias de um mês

import java.util.Scanner;

class Dias_meses{
	public static void main(String args[]){		
		
		Scanner scan = new Scanner(System.in);
		
		int mes;

		System.out.print("Digite o mes:\n01-Janeiro\n02-Fevereiro\n03-Março\n04-Abril\n05-Maio\n06-Junho\n07-Julho\n08-Agosto\n09-Setembro\n10-Outubro\n11-Novembro\n12-Dezembro\n= ");
		mes = scan.nextInt();
		
		if (mes==01||mes==03||mes==05||mes==07||mes==8||mes==10||mes==12)
			System.out.println("O mes possui 31 dias");
		else if (mes==02)
			System.out.println("O mes possui 28 ou 29 dias(ano bissextos)");
		else if(mes>12 || mes < 01)
			System.out.print("Esse mes nao existe!");
		else
			System.out.print("O mes possui 30 dias");
	}
}
