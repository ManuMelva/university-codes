#include <stdio.h>
#include <string.h>

int main()
{
    char Nome[20];
    char Sobrenome[20];
    char NomeCompleto[20];

    printf("Digite o seu nome:");
    fgets(Nome, sizeof(Nome), stdin);

    if (strlen(Nome) > 0 && Nome[strlen(Nome) - 1] == '\n')
    {
        Nome[strlen(Nome) - 1] = '\0';
    }

    printf("Digite o seu sobrenome:");
    fgets(Sobrenome, sizeof(Sobrenome), stdin);

    strcpy(NomeCompleto, Nome);
    strcat(NomeCompleto, Sobrenome);

    printf("\nSeu nome completo e: %s",NomeCompleto);

    return 0;
}