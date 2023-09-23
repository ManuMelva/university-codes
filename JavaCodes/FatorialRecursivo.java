import java.util.*;

public class FatorialRecursivo{
	
  public static void main(String[] args)
  {
	Scanner scan = new Scanner(System.in);
	  
	System.out.println("Digite o numero que deseja calcular o fatorial: ");
    int num = scan.nextInt();
	
    int fatorial = fatorial(num);
	
    System.out.println("O fatorial de " + num + " e " + fatorial);
  }

  public static int fatorial(int num)
  {
    if(num == 0)
	{
      return 1;
    } 
	
	else
	{
      return num * fatorial(num - 1);
    }
  }
}
