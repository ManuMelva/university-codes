#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LINHAS 4
#define COLUNAS 20
#define MAX_PALAVRA 15

int contarVogais(char *palavra) {
    int vogais = 0;
    
    for (int i = 0; palavra[i] != '\0'; i++) {
        char c = tolower(palavra[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }
    
    return vogais;
}

int main() {
    char matriz[LINHAS][COLUNAS];
    int contador_vogais[LINHAS];
    
    printf("Digite %d palavras:\n", LINHAS);
    for (int i = 0; i < LINHAS; i++) {
        scanf("%s", matriz[i]);
    }
    
    for (int i = 0; i < LINHAS; i++) {
        contador_vogais[i] = contarVogais(matriz[i]);
    }
    
    printf("\nMatriz de palavras:\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("%s\n", matriz[i]);
    }
    
    printf("\nContagem de vogais em cada palavra:\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("Palavra %d: %d vogais\n", i + 1, contador_vogais[i]);
    }
    
    return 0;
}
