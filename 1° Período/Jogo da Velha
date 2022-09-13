// Jogo da Velha sem usar matriz

import java.util.Scanner;
import java.io.IOException;

public class Jogo_da_Velha{
    public static void main (String arg[]) throws IOException, InterruptedException{
		Scanner scan = new Scanner(System.in);
		int jogador = 1;
		boolean fim = false;
		boolean vencedor = false;
		int coordenada = 0;
		String coordenada_33 = ("_");
		String coordenada_32 = ("_");
		String coordenada_31 = (" ");
		String coordenada_23 = ("|_|");
		String coordenada_22 = ("|_|");
		String coordenada_21 = ("| | ");
		String coordenada_13 = ("3 _");
		String coordenada_12 = ("2 _");
		String coordenada_11 = ("1  ");
		String eixo_X = ("  1 2 3");
		boolean coordenada33 = true, coordenada32 = true, coordenada31 = true; 
		boolean coordenada22 = true, coordenada21 = true, coordenada13 = true; 
		boolean coordenada12 = true, coordenada23 = true, coordenada11 = true;
		
		
		System.out.printf("" + coordenada_13 + coordenada_23 + coordenada_33 + "\n" + coordenada_12 + coordenada_22 + coordenada_32 +
		"\n" + coordenada_11 + coordenada_21 + coordenada_31 + "\n" + eixo_X);
		
		
		do{
			try{		
				if(jogador % 2 != 0){
					System.out.printf("\nJogador 1\n digite a posicao na qual deseja colocar o X, comecando pelos numeros do eixo X (de baixo): ");
					coordenada = scan.nextInt();
					if((coordenada != 11 && coordenada != 12 && coordenada != 13) &&
					(coordenada != 21 && coordenada != 22 && coordenada != 23) &&
					(coordenada != 31 && coordenada != 32 && coordenada != 33)){
						throw new IOException();
					}
				}
				
				else if(jogador % 2 == 0){
					System.out.printf("\nJogador 2\n digite a posicao na qual deseja colocar o O, comecando pelos numeros do eixo X (de baixo): ");
					coordenada = scan.nextInt();
					if((coordenada != 11 && coordenada != 12 && coordenada != 13) &&
					(coordenada != 21 && coordenada != 22 && coordenada != 23) &&
					(coordenada != 31 && coordenada != 32 && coordenada != 33)){
						throw new IOException();
					}
				}
			
				if(jogador % 2 != 0 && coordenada == 11 && coordenada11 == true){
					coordenada_11 = "1 X";
					coordenada11 = false;
				}
				else if(jogador % 2 != 0 && coordenada == 12 && coordenada12 == true){
					coordenada_12 = "2 X";
					coordenada12 = false;
				}
				else if(jogador % 2 != 0 && coordenada == 13 && coordenada13 == true){
					coordenada_13 = "3 X";
					coordenada13 = false;
				}
				else if(jogador % 2 != 0 && coordenada == 21 && coordenada21 == true){
					coordenada_21 = "|X|";
					coordenada21 = false;
				}
				else if(jogador % 2 != 0 && coordenada == 22 && coordenada22 == true){
					coordenada_22 = "|X|";
					coordenada22 = false;
				}	
				else if(jogador % 2 != 0 && coordenada == 23 && coordenada23 == true){
					coordenada_23 = "|X|";
					coordenada23 = false;
				}
				else if(jogador % 2 != 0 && coordenada == 31 && coordenada31 == true){
					coordenada_31 = "X";
					coordenada31 = false;
				}				
				else if(jogador % 2 != 0 && coordenada == 32 && coordenada32 == true){
					coordenada_32 = "X";
					coordenada32 = false;
				}
				else if(jogador % 2 != 0 && coordenada == 33 && coordenada33 == true){
					coordenada_33 = "X";
					coordenada33 = false;
				}
				else if(jogador % 2 == 0 && coordenada == 11 && coordenada11 == true){
					coordenada_11 = "1 O";
					coordenada11 = false;
				}
				else if(jogador % 2 == 0 && coordenada == 12 && coordenada12 == true){
					coordenada_12 = "2 O";
					coordenada12 = false;
				}
				else if(jogador % 2 == 0 && coordenada == 13 && coordenada13 == true){
					coordenada_13 = "3 O";
					coordenada13 = false;
				}
				else if(jogador % 2 == 0 && coordenada == 21 && coordenada21 == true){
					coordenada_21 = "|O|";
					coordenada21 = false;
				}
				else if(jogador % 2 == 0 && coordenada == 22 && coordenada22 == true){
					coordenada_22 = "|O|";
					coordenada22 = false;
				}	
				else if(jogador % 2 == 0 && coordenada == 23 && coordenada23 == true){
					coordenada_23 = "|O|";
					coordenada23 = false;
				}
				else if(jogador % 2 == 0 && coordenada == 31 && coordenada31 == true){
					coordenada_31 = "O";
					coordenada31 = false;
				}				
				else if(jogador % 2 == 0 && coordenada == 32 && coordenada32 == true){
					coordenada_32 = "O";
					coordenada32 = false;
				}
				else if(jogador % 2 == 0 && coordenada == 33 && coordenada33 == true){
					coordenada_33 = "O";
					coordenada33 = false;
				}
				else if((coordenada == 11 && coordenada11 == false) || (coordenada == 12 && coordenada12 == false) || (coordenada == 13 && coordenada13 == false) ||
				(coordenada == 21 && coordenada21 == false) || (coordenada == 22 && coordenada22 == false) || (coordenada == 23 && coordenada23 == false) ||
				(coordenada == 31 && coordenada31 == false) || (coordenada == 32 && coordenada32 == false) || (coordenada == 33 && coordenada33 == false)){
					throw new IOException();
				}
			}
			catch(Exception ex){
				new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
				System.out.printf("Erro na digitacao da posicao!!!\n\n");
				scan.nextLine();
			}
			
			System.out.printf("" + coordenada_13 + coordenada_23 + coordenada_33 + "\n" + coordenada_12 + coordenada_22 + coordenada_32 +
		    "\n" + coordenada_11 + coordenada_21 + coordenada_31 + "\n" + eixo_X);	
			
			if((coordenada_11 == "1 X" && coordenada_12 == "2 X" && coordenada_13 == "3 X") || 
			(coordenada_11 == "1 X" && coordenada_21 == "|X|" && coordenada_31 == "X") || 
			(coordenada_13 == "3 X" && coordenada_23 == "|X|" && coordenada_33 == "X") || 
			(coordenada_12 == "2 X" && coordenada_22 == "|X|" && coordenada_32 == "X") || 
			(coordenada_21 == "|X|" && coordenada_22 == "|X|" && coordenada_23 == "|X|") || 
			(coordenada_31 == "X" && coordenada_32 == "X" && coordenada_33 == "X") || 
			(coordenada_13 == "3 X" && coordenada_22 == "|X|" && coordenada_31 == "X") || 
			(coordenada_33 == "X" && coordenada_22 == "|X|" && coordenada_11 == "1 X")){
				System.out.printf("\nJOGADOR 1 VENCEU!");
				fim = true;
				vencedor = true;
			}
			else if((coordenada_11 == "1 O" && coordenada_12 == "2 O" && coordenada_13 == "3 O") || 
			(coordenada_11 == "1 O" && coordenada_21 == "|O|" && coordenada_31 == "O") || 
			(coordenada_13 == "3 O" && coordenada_23 == "|O|" && coordenada_33 == "O") || 
			(coordenada_12 == "2 O" && coordenada_22 == "|O|" && coordenada_32 == "O") || 
			(coordenada_21 == "|O|" && coordenada_22 == "|O|" && coordenada_23 == "|O|") || 
			(coordenada_31 == "O" && coordenada_32 == "O" && coordenada_33 == "O") || 
			(coordenada_13 == "3 O" && coordenada_22 == "|O|" && coordenada_31 == "O") || 
			(coordenada_33 == "O" && coordenada_22 == "|O|" && coordenada_11 == "1 O")){
				System.out.printf("\nJOGADOR 2 VENCEU!\n");
				fim = true;
				vencedor = true;
			}
			else if((coordenada33 == false && coordenada32 == false && coordenada31 == false) &&
			(coordenada22 == false && coordenada21 == false && coordenada13 == false) &&
			(coordenada12 == false && coordenada23 == false && coordenada11 == false) &&
			(vencedor == false)){
				System.out.printf("\nEMPATE!!\n");
				fim = true;
			}
			
 
			jogador = jogador + 1;	
		}while(fim == false);	
			
	}
}
