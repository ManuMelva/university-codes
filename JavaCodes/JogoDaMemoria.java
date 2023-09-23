import java.util.*;
import java.io.*;
import java.util.concurrent.TimeUnit;

public class JogoDaMemoria
{
	public static void main(String... arg) throws IOException, InterruptedException
	{
		String quadro[][] = new String[4][4];
		
		String quadro_vazio[][] = {
			{"*", "*", "*", "*",},
			{"*", "*", "*", "*",},
			{"*", "*", "*", "*",},
			{"*", "*", "*", "*",},
		};
		
		String valores[] = {"A", "A", "B", "B", "C", "C", "D", "D", "E", "E", "F", "F", "G", "G", "H", "H"};
		String valores_novo[] = {"A", "B", "C", "D", "E", "F", "G", "H"};
		
		imprimirQuadro(quadro_vazio);
		new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
		
		embaralharValores(valores);
		
		preencherQuadro(valores, quadro);
		
		imprimirQuadroLetras(quadro);
		new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
		
		imprimirQuadro(quadro_vazio);
		
		jogadas(quadro, quadro_vazio);
	}
	
	public static void preencherQuadroNovo(String[] valores_novo, String[][] quadro)
	{
		String temp[] = new String[16];
		
		for(int i = 0; i < temp.length; i++)
		{
			temp[i] = valores_novo[i];
			
			
		}
	}
	
	public static void imprimirQuadro(String[][] board) throws InterruptedException
	{
		for(int i = 0; i < board.length; i++)
		{
			for(int j = 0; j < board.length; j++)
			{
				System.out.print(board[i][j] + " ");
				TimeUnit.MILLISECONDS.sleep(150);
			}
			System.out.println("");
		}
	}
	
	public static void imprimirQuadroLetras(String[][] board) throws InterruptedException
	{
		for(int i = 0; i < board.length; i++)
		{
			for(int j = 0; j < board.length; j++)
			{
				System.out.print(board[i][j] + " ");
				TimeUnit.SECONDS.sleep(1);
			}
			System.out.println("");
		}
	}
	
	public static void embaralharValores(String[] valores)
	{
		Random aleatorio = new Random();
		
		for(int i = 0; i < valores.length; i++)
		{
			int j = aleatorio.nextInt(valores.length);
			String aux = valores[i];
			valores[i] = valores[j];
			valores[j] = aux;
		}
	}
	
	public static void preencherQuadro(String[] valores, String[][] quadro)
	{	
		int index = 0;
		for(int i = 0; i < quadro.length; i++)
		{
			for(int k = 0; k < quadro.length; k++)
			{
				quadro[i][k] = valores[index];
				index++;
			}
		}
	}
	
	public static void jogadas(String[][] quadro, String[][] quadro_vazio) throws InterruptedException, IOException
	{
		Scanner scan = new Scanner(System.in);
		
		String ANSI_RESET = "\u001B[0m";
  
		String ANSI_YELLOW = "\u001B[33m";
		
		String ANSI_RED = "\u001B[31m";
		
		String ANSI_GREEN = "\u001B[32m";
		
		boolean jogo_finalizado = false;
		int cartas_viradas = 0;
		
		while(!jogo_finalizado)
		{
			System.out.println("Escolha uma linha e coluna: ");
			int linha1 = scan.nextInt();
			int coluna1 = scan.nextInt();
			
			if((linha1 > 3 || linha1 < 0) || (coluna1 > 3 || coluna1 < 0))
			{
				System.out.println(ANSI_RED + "Escolha uma posicao valida!" + ANSI_RESET);
				continue;
			}
			
			if(quadro_vazio[linha1][coluna1] != "*")
			{
				System.out.println(ANSI_RED + "Carta ja virada, escolha outra." + ANSI_RESET);
				continue;
			}
			
			quadro_vazio[linha1][coluna1] = quadro[linha1][coluna1];
            cartas_viradas++;
			
			imprimirQuadro(quadro_vazio);
			
			System.out.println("Escolha outra linha e coluna: ");
			int linha2 = scan.nextInt();
			int coluna2 = scan.nextInt();
			
			if(quadro_vazio[linha2][coluna2] != "*")
			{
				System.out.println(ANSI_RED + "Carta ja virada, escolha outra." + ANSI_RESET);
				quadro_vazio[linha1][coluna1] = "*";
				continue;
			}
			
			quadro_vazio[linha2][coluna2] = quadro[linha2][coluna2];
            cartas_viradas++;
			
			imprimirQuadro(quadro_vazio);
			new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
			
			if (quadro[linha1][coluna1].equals(quadro[linha2][coluna2]))
			{
                System.out.println(ANSI_GREEN + "Par encontrado!" + ANSI_RESET);
            } 
			else 
			{
                quadro_vazio[linha1][coluna1] = "*";
                quadro_vazio[linha2][coluna2] = "*";
				cartas_viradas = cartas_viradas - 2;
            }
			
			imprimirQuadro(quadro_vazio);
			
			if (cartas_viradas == 16) {
                jogo_finalizado = true;
                System.out.println(ANSI_YELLOW + "Parabens, voce venceu o jogo!" + ANSI_RESET);
            }
		}
	}
}
