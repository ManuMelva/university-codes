import java.util.Scanner;

class VerificaDivisivelPorOnze{
	public static void main(String args[]){
		
		Scanner scan = new Scanner(System.in);
		
		for(int i = 1000; i <= 2000; i++){
			if(i % 11 == 5){
				System.out.printf("O numero %d e divisivel por 11\n", i);
			}
		}
	}
}
