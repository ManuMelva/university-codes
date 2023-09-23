package fundamentalprograms;

import java.util.Scanner;

public class OrdenaNumerosCrescenteDecrescente{
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		
		int tamanho,aux, aux2;
		
		System.out.println("Digite a quantidade de numeros que quer ter a ordem");
		tamanho = sc.nextInt();
		
		int a[] = new int[tamanho];
		int b[] = new int[tamanho];
		
		System.out.println("Digite " + tamanho + " numeros agora ");
		for(int i = 0; i < tamanho; i++){
			a[i] = sc.nextInt();
		}
		sc.close();
		
		for(int i = 0; i<tamanho; i++){
			for(int j = i+1; j < tamanho; j++){
				if(a[i] > a[j]){
					aux = a[i];
					a[i] = a[j];
					a[j] = aux;
				}
			}
		}
		
		for(int i = 0; i < tamanho; i++){
			b[i] = a[i];
		}
		
		for(int h = 0; h < tamanho; h++){
			for(int k = h+1; k < tamanho; k++){
				if(b[h] < b[k]){
					aux2 = b[h];
					b[h] = b[k];
					b[k] = aux2;
				}
			}
		}
		
		System.out.println("Os numero em ordem crescente sao: ");
	    for (int i = 0; i <= tamanho-1; i++) 
        {
            System.out.print(a[i] + ", ");
        }
		System.out.println("\nOs numero em ordem decrescente sao: ");
	    for (int h = 0; h <= tamanho-1; h++) 
        {
            System.out.print(b[h] + ", ");
        }	
	}
}
