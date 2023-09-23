#include <stdio.h>

int main()
{
    char nome[4];
    printf("Digite a palavra lua:");

    fgets(nome, sizeof(nome), stdin);

    printf("\n %s",nome);

    return 0;
}