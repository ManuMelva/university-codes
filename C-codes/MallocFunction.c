#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int C;
  int H;
} Hidrocarboneto;

int main() {
  Hidrocarboneto *hidrocarboneto;
  int C, H;

  hidrocarboneto = (Hidrocarboneto *) malloc(sizeof(Hidrocarboneto));
  if (hidrocarboneto == NULL) {
    printf("Erro ao alocar memória.\n");
    return 1;
  }

  printf("Digite a quantidade de carbonos: ");
  scanf("%d", &C);
  printf("Digite a quantidade de hidrogênios: ");
  scanf("%d", &H);

  hidrocarboneto->C = C;
  hidrocarboneto->H = H;

  float massa_atomica = 12.011 * C + 1.008 * H;

  printf("Massa atômica: %.4f\n", massa_atomica);

  free(hidrocarboneto);

  return 0;
}
