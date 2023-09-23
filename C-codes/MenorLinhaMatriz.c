#include <stdio.h>

#define MAX_TAMANHO_MATRIZ 50

int main() 
{
    int tamanho;
    int matriz[MAX_TAMANHO_MATRIZ][MAX_TAMANHO_MATRIZ];
    int menor = 0;
    int linha_menor = -1;

    do 
    {
        printf("Digite o tamanho da matriz quadrada (1 a %d): ", MAX_TAMANHO_MATRIZ);
        scanf("%d", &tamanho);
    } while (tamanho <= 0 || tamanho > MAX_TAMANHO_MATRIZ);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < tamanho; i++) 
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0 || matriz[i][j] < menor) 
            {
                menor = matriz[i][j];
                linha_menor = i;
            }
        }
    }

    printf("\nA linha com o menor número é a linha %d.\n", linha_menor);

    return 0;
}