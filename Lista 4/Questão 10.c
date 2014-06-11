
#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    char s1[15],s2[15],s3[40];
    int i,j,n ,s = 0,p,q;

    printf("Digite uma palavra:");
    gets(s1);
    printf("Digite outra palavra:");
    gets(s2);
    p = strlen(s1);
    q = p + strlen(s2);

    for (j = 0;j < p ;j++)
    {
        s3[j] = s1[j];
    }

    n == j;


    while (n < q)
    {
        s3[n] = s2[s];
        n++;
        s++;
    }




        printf("%s",s3);



}
