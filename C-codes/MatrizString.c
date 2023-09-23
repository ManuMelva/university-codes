#include <stdio.h>
#include <string.h>

#define TAMANHO_VETOR 2

int main()
{
   char Palavra[2][10];
   int _contMaiorQue = 0;
   int _contIguais = 0;

   for(int i = 0; i < TAMANHO_VETOR; i++)
   {
      printf("\nDigite uma palavra: ");
      fgets(Palavra[i], sizeof(Palavra), stdin);

        if (strlen(Palavra[i]) > 0 && Palavra[i][strlen(Palavra[i]) - 1] == '\n')
        {
            Palavra[i][strlen(Palavra[i]) - 1] = '\0';
        }

      if(strlen(Palavra[i]) > 5)
      {
         printf("A palavra %s possui mais que 5 caracteres!\n", Palavra[i]);
         _contMaiorQue++;
      }
   }

   for(int i = 0; i < TAMANHO_VETOR; i++)
   {
        for(int j = i + 1; j < TAMANHO_VETOR; j++)
        {
            if(!strcmp(Palavra[i], Palavra[j]))
            {
                _contIguais++;
            }
        }
   }

    if(_contIguais > 0)
        printf("\nO número de palavras iguais é: %i", _contIguais);
    if(_contMaiorQue > 0)
        printf("\nO número de palavras com mais que 5 caracteres é: %i", _contMaiorQue);

   return 0;
}