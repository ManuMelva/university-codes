#include <stdio.h>

#define MAX_ALUNOS 50
#define NUM_PROVAS 4

int main() 
{
    int num_alunos;
    double notas[MAX_ALUNOS][NUM_PROVAS];
    double media_alunos[MAX_ALUNOS];
    double media_classe = 0.0;

    do 
    {
        printf("Digite o número de alunos (max %d): ", MAX_ALUNOS);
        scanf("%d", &num_alunos);
    } while (num_alunos <= 0 || num_alunos > MAX_ALUNOS);

    for (int i = 0; i < num_alunos; i++) 
    {
        printf("Notas do aluno %d:\n", i + 1);
        for (int j = 0; j < NUM_PROVAS; j++) 
        {
            printf("Nota da prova %d: ", j + 1);
            scanf("%lf", &notas[i][j]);
        }

        media_alunos[i] = 0.0;
        for (int j = 0; j < NUM_PROVAS; j++) 
        {
            media_alunos[i] += notas[i][j];
        }
        media_alunos[i] /= NUM_PROVAS;

        media_classe += media_alunos[i];
    }

    if (num_alunos > 0) 
    {
        media_classe /= num_alunos;
    }

    printf("\nMédias dos alunos:\n");
    for (int i = 0; i < num_alunos; i++) 
    {
        printf("Aluno %d: %.2lf\n", i + 1, media_alunos[i]);
    }

    printf("\nMédia da classe: %.2lf\n", media_classe);

    return 0;
}