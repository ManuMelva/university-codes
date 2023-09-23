#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float divisao(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisão por zero\n");
        return 0;
    }
}

float multiplicacao(float a, float b) {
    return a * b;
}

int main() {
    float num1, num2;
    char operacao;
    
    printf("Digite um número: ");
    scanf("%f", &num1);
    
    printf("Digite outro número: ");
    scanf("%f", &num2);
    
    printf("Escolha a operação (+, -, *, /): ");
    scanf(" %c", &operacao);
    
    switch (operacao) {
        case '+':
            printf("Resultado da Soma: %.2f\n", soma(num1, num2));
            break;
        case '-':
            printf("Resultado da Subtração: %.2f\n", subtracao(num1, num2));
            break;
        case '*':
            printf("Resultado da Multiplicação: %.2f\n", multiplicacao(num1, num2));
            break;
        case '/':
            printf("Resultado da Divisão: %.2f\n", divisao(num1, num2));
            break;
        default:
            printf("Operação inválida\n");
    }
    
    return 0;
}