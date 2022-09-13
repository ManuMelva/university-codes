// Jogo da Forca

import java.util.Random;
import java.util.Scanner;

class Jogo_da_Forca{

    public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);

        String[] palavras = {"mamute", "isento", "eficaz", "alheio", "casual"};
        int erros = 0;
        int acertos = 0;
		
        while (true) {
            boolean continuar = true;
			while (continuar) {
				System.out.println("\nBem-Vindo\n");
				erros = 0;
				acertos = 0;
				int aleatorio = new Random().nextInt(palavras.length);
				String palavra = palavras[aleatorio];

				int tamanho = palavra.length();
				char Acertoschar[] = new char[tamanho];
				for (int i = 0; i < tamanho; i++) {
					Acertoschar[i] = '_';
				}

				boolean fim = false;
				while (erros <= 6 && acertos < tamanho) {
					if (aleatorio == 0){
					System.out.println("\nDica: Um animal da Era do Gelo");
					}
					else if (aleatorio == 1){
						System.out.println("\nDica: Que nao paga");
					}
					else if (aleatorio == 2){
						System.out.println("\nDica: Que e feito de forma bem feita");
					}
					else if (aleatorio == 3){
						System.out.println("\nDica: nao esta relacionado");
					}
					else if (aleatorio == 4){
						System.out.println("\nDica: algo entre amigos");
					}
					
					String forca = "\n" 
							+ " ||======|  \n" 
							+ " ||      1  \n" 
							+ " ||     234 \n" 
							+ " ||     5 6 \n";

					switch (erros) {
						case 0:
							forca = forca.replace('1', ' ').replace('3', ' ').replace('4', ' ').replace('2', ' ').replace('6', ' ').replace('5', ' ');
							break;
						case 1:
							forca = forca.replace('1', 'O').replace('3', ' ').replace('4', ' ').replace('2', ' ').replace('6', ' ').replace('5', ' ');
							break;
						case 2:
							forca = forca.replace('1', 'O').replace('3', '|').replace('4', ' ').replace('2', ' ').replace('6', ' ').replace('5', ' ');
							break;
						case 3:
							forca = forca.replace('1', 'O').replace('3', '|').replace('4', '\\').replace('2', ' ').replace('6', ' ').replace('5', ' ');
							break;
						case 4:
							forca = forca.replace('1', 'O').replace('3', '|').replace('4', '\\').replace('2', '/').replace('6', ' ').replace('5', ' ');
							break;
						case 5:
							forca = forca.replace('1', 'O').replace('3', '|').replace('4', '\\').replace('2', '/').replace('6', '\\').replace('5', ' ');
							break;
						case 6:
							forca = forca.replace('1', 'O').replace('3', '|').replace('4', '\\').replace('2', '/').replace('6', '\\').replace('5', '/');
							break;
					}
					
					System.out.println(forca);
					if (erros == 6) {
						break;
					}

					System.out.print("Digite uma letra: ");
					char letra = scan.nextLine().toLowerCase().charAt(0);

					if (String.valueOf(Acertoschar).indexOf(letra) == -1) {
						for (int i = 0; i < tamanho; i++) {
							if (palavra.charAt(i) == letra) {
								Acertoschar[i] = letra;
								fim = true;
								acertos++;
							}
						}
						
						if (!fim) {
							erros++;
						}
					}
					
					System.out.println("\nErros: " + erros);

					for (int i = 0; i < tamanho; i++) {
						System.out.print(Acertoschar[i] + " ");
					}
					
					System.out.println();
					fim = false;
				}
				
				if (erros == 6) {
					System.out.println("Voce foi enforcado!");
					System.out.println("A palavra era: " + palavra);
				} 
				else {
					System.out.println("\nPARABENS, voce acertou a palavra!");
				}
				break;
			}
            break;
        }
    }
}
