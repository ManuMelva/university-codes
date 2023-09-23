#include <stdio.h>

void concatenarStrings(char *str1, char *str2) {
    while (*str1 != '\0') {
        str1++;
    }
    
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    
    *str1 = '\0';
}

int main() {
    char string1[50] = "Hello, ";
    char string2[] = "world!";

    printf("Antes da concatenação:\n");
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);

    concatenarStrings(string1, string2);

    printf("Depois da concatenação:\n");
    printf("string1: %s\n", string1);

    return 0;
}
