#include <stdio.h>
#include <string.h>

int main()
{
   char Palavra[100];
   int count = 0;

   printf("Digite uma palavra:");
   fgets(Palavra, sizeof(Palavra), stdin);

   while(Palavra[count] != '\0' && count < 99)
   {
      count++;
   }

   printf("O numero de caracteres digitado foi: %d", count);

   return 0;
}