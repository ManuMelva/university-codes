#include <stdio.h>

int main() 
{
    int max_numero;
    int aux;
    int ponto_parada;

    do 
    {
        printf("Digite o número máximo (ímpar): ");
        scanf("%d", &max_numero);
    } while (max_numero % 2 == 0);

    aux = max_numero;

    ponto_parada = ((max_numero - 1) / 2) + 1;

    for (int i = 1; i <= max_numero; i++) 
    {
        for (int j = 1; j < i; j++) 
        {
            printf("   ");  
        }

        for (int x = i; x <= max_numero; x++) 
        {
            if(x == aux && i != 1)
            {
                aux--;
                break;
            }

            printf("%2d ", x);
        }

        printf("\n");

        if(i == ponto_parada) break;
    }

    return 0;
}