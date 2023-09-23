#include <stdio.h>
#include <string.h>

int main()
{
    char string1[21];
    char string2[21];
    int i;

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    if (strlen(string1) > 0 && string1[strlen(string1) - 1] == '\n')
    {
        string1[strlen(string1) - 1] = '\0';
    }

    for (i = 0; i < 20 && string1[i] != '\0'; i++)
    {
        string2[i] = string1[i];
    }

    string2[i] = '\0';

    printf("Conteúdo da primeira string: %s\n", string1);
    printf("Conteúdo da segunda string (cópia): %s\n", string2);

    return 0;
}