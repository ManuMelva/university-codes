#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    float media;
    int faltas;
} Aluno;

int main() {
  int n;
  Aluno *alunos;

  printf("Digite o número de alunos: ");
  scanf("%d", &n);

  alunos = (Aluno *) malloc(n * sizeof(Aluno));
  if (alunos == NULL) {
    printf("Erro ao alocar memória.\n");
    return 1;
  }

  for (int i = 0; i < n; i++) {
    printf("Digite o nome do aluno %d: ", i + 1);
    scanf("%s", alunos[i].nome);
    printf("Digite a média do aluno %d: ", i + 1);
    scanf("%f", &alunos[i].media);
    printf("Digite o número de faltas do aluno %d: ", i + 1);
    scanf("%d", &alunos[i].faltas);
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (alunos[j].media < alunos[j + 1].media) {
        Aluno temp = alunos[j];
        alunos[j] = alunos[j + 1];
        alunos[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("Nome: %s\n", alunos[i].nome);
    printf("Média: %.2f\n", alunos[i].media);
    printf("Faltas: %d\n", alunos[i].faltas);
  }

  free(alunos);

  return 0;
}