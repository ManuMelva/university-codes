#include <stdio.h>

void trocarCaracteres(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    char char1 = 'A';
    char char2 = 'B';

    printf("Antes da troca:\n");
    printf("char1 = %c, char2 = %c\n", char1, char2);

    trocarCaracteres(&char1, &char2);

    printf("Depois da troca:\n");
    printf("char1 = %c, char2 = %c\n", char1, char2);

    return 0;
}
