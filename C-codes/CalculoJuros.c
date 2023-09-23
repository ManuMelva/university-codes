#include <stdio.h>

//VF = VP(1 + in)

float CalculoJuros(int _opcao)
{
    float VP, VF, tempo, TaxaJuros = 0;

    switch(_opcao)
    {
        case 1:
            printf("Digite o Valor Futuro: ");
            scanf("%f", &VF);
            printf("Digite a taxa de juros: ");
            scanf("%f", &TaxaJuros);
            printf("Digite o tempo de aplicação: ");
            scanf("%f", &tempo);

            return (VF/(1 + TaxaJuros * tempo));
            break;

        case 2:
            printf("Digite o Valor Presente: ");
            scanf("%f", &VP);
            printf("Digite a taxa de juros: ");
            scanf("%f", &TaxaJuros);
            printf("Digite o tempo de aplicação: ");
            scanf("%f", &tempo);

            return VP*(1 + TaxaJuros * tempo);
            break;

        case 3:
            printf("Digite o Valor Presente: ");
            scanf("%f", &VP);
            printf("Digite o Valor Futuro: ");
            scanf("%f", &VF);
            printf("Digite a taxa de juros: ");
            scanf("%f", &TaxaJuros);

            return ((VF - VP) / (VP * TaxaJuros));
            break;

        case 4:
            printf("Digite o Valor Presente: ");
            scanf("%f", &VP);
            printf("Digite o Valor Futuro: ");
            scanf("%f", &VF);
            printf("Digite o tempo de aplicação: ");
            scanf("%f", &tempo);

            return ((VF - VP) / (VP * tempo));
            break;
    }
}

int main()
{
    int Opcao = 0;
    float resultado = 0.0;

    printf("Bem-Vindo ao Calculo de Juros Simples!\n");

    printf("Selecione uma opção para calcular os juros: \n");
    printf("1 - Calcular o Valor Presente\n2 - Calcular o Valor Futuro\n3 - Calcular o tempo necessário\n4 - Calcular a taxa de juros\n");
    scanf("%d", &Opcao);

    resultado = CalculoJuros(Opcao);

    if(Opcao == 4) resultado = resultado * 100;

    switch(Opcao)
    {
        case 1:
            printf("O Valor presente e: %.2f", resultado);
            break;

        case 2:
            printf("O Valor Futuro e: %.2f", resultado);
            break;

        case 3:
            printf("O tempo necessario e: %.2f meses", resultado);
            break;

        case 4:
            printf("A taxa de juros e: %.2f %", resultado);
            break;
    }
}