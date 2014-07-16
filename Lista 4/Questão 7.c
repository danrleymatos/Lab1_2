#include <stdio.h>

int main()

{
    char a[80],b[80];
    int i = 0,n,cont = 0,j = 0,k;

    printf("Digite uma palavra:");
    gets(a);
    printf("Digite outra palavra:");
    gets(b);
    n = strlen(a);
    k = strlen(b);

    while(i < n)
    {
        if ( a[i] == b[j] )
        {
            i++;
            j++;
        }

        else
        {
            i++;
            j = 0;
        }

            if (j == k)
                {
                    cont = cont + 1;
                    j = 0;
                }

    }


    printf("A quantidade de vezes que aparece e:%d",cont);
    return 0;
}
