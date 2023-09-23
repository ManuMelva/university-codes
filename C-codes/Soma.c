#include <stdio.h>
#include <conio.h>

int soma(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 0, b = 0, result = 0;

    printf("Vamos somar 2 valos!\n");

    printf("Digite o primeiro valor da soma: ");
    scanf("%d", &a);
    printf("Digite o segundo valor da soma: ");
    scanf("%d", &b);

    result = soma(a, b);

    printf("O resultado da soma e: %d", result);

    getch();

    return 0;
}