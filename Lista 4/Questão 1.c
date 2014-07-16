#include <stdio.h>
#include <stdlib.h>

int main()

{
    int tamanho;
    char palavra[80],s[80];

        printf("Digite uma palavra:");
        gets(palavra);
        printf("Digite quanto vai se passar a frente:");
        scanf("%d",&tamanho);
            calcule (tamanho,palavra);
    return 0;
  }


int calcule (int tamanho2,char palavra2[80])
{
    int j,i;

        for(i = 0;i < strlen(palavra2);i++ )
        {
            palavra2[i] = palavra2[i] + tamanho2;
        }

     printf("%s",palavra2);


return 1;


}

