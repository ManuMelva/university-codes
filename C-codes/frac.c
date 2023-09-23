#include <stdio.h>

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;  
    *frac = num - *inteiro;  
}

int main() {
    float numero = 123.456;
    int parteInteira;
    float parteFracionaria;

    frac(numero, &parteInteira, &parteFracionaria);

    printf("Número: %.3f\n", numero);
    printf("Parte Inteira: %d\n", parteInteira);
    printf("Parte Fracionária: %.3f\n", parteFracionaria);

    return 0;
}
