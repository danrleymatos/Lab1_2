#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	float cat_a, cat_b,h;
	printf("Informe os catetos a e b:");
	scanf("%f %f",&cat_a,&cat_b);
	h=sqrt((cat_a*cat_a)+(cat_b*cat_b));
	printf("A hipotenusa eh: %.2f",h);
	return (0);
}

