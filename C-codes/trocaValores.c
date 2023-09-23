#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    printf("Antes da troca:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    trocarValores(&num1, &num2);

    printf("Depois da troca:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
