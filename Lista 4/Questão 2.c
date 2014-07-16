#include <stdio.h>
#include <stdlib.h>

int main()

{
    char palavra[80];

    printf("Digite uma palavra:");
    gets(palavra);
    calcule (palavra);
    return 0;

 }



int calcule (char palavra2[80])

{
    int i = 0,j;

    j = strlen(palavra2);

    while (i < (j / 2) )
    {
        if (palavra2[i] == palavra2[j] )
        {
            i++;
        }
        else
        {
            i = j;
            printf("nao e um palindromo");
            system("pause");
            return 1;
        }
    }

            printf("e um palindromo");


return 1;

}



