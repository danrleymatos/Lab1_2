#include <stdio.h>

int main()
{
    char nome[80],vog[5] = {'a','e','i','o','u'},novo[80];
    int i = 0  ,j;

    printf("Digite uma palavra:");
    scanf ("%s",&nome);
    j = strlen(nome);

    while (i < j)
    {
            if (nome[i] == vog[0] || nome[i] == vog[1] )
            {
            nome[i] = '';
            i++;
            }
    }



        printf("%s",nome[i]);


    return 0;

}
