#include <stdio.h>

int somaDobro(int a, int b) {
    return (2 * a) + (2 * b);
}

int main() {
    int num1, num2;

    printf("Digite o valor do primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o valor do segundo número: ");
    scanf("%d", &num2);

    int resultado = somaDobro(num1, num2);

    printf("Soma do dobro dos números: %d\n", resultado);

    return 0;
}
