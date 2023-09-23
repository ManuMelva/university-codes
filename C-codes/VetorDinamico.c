#include <stdio.h>
#include <stdlib.h>

int main() {
  int *vetor;
  int tamanho;
  int soma = 0;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  vetor = (int *) malloc(tamanho * sizeof(int));
  if (vetor == NULL) {
    printf("Erro ao alocar memória.\n");
    return 1;
  }

  for (int i = 0; i < tamanho; i++) {
    printf("Digite o valor do elemento %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  printf("Vetor lido:\n");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] % 2 == 1) {
      soma += vetor[i];
    }
  }

  printf("Soma dos números impares: %d\n", soma);

  free(vetor);

  return 0;
}