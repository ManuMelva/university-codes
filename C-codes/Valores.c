#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 3;

    float result = 0.0;

    printf("Os valores sao: %i, %i e %f", num1, num2, result);

    result = num1 + num2;
    printf("O valor do resultado agora e: %f", result);

    result = num1 / num2;
    printf("O valor do resultado agora e: %f", result);

    result = num1 * num2;
    printf("O valor do resultado agora e: %f", result);

    char temp[15];

    gets(temp);
    
    printf("A string e: %s\n", temp);

    return 0;
}