#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void swapWords(char *str) {
    char *word1 = strtok(str, " ");
    char *word2 = strtok(NULL, " ");

    strcat(word2, word1);

    if (word1 != NULL && word2 != NULL) {
        sprintf(str, "%s", word2);
    }
}

int main() {
    char input[MAX_LENGTH];
    printf("Digite uma frase com duas palavras: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    char original[MAX_LENGTH];
    strcpy(original, input);

    swapWords(input);

    printf("Frase original: %s\n", original);
    printf("Frase com as palavras trocadas: %s\n", input);

    return 0;
}