#include<stdio.h>

int main()
{
	float r, a;
    printf("Digite o raio do circulo\n");
	scanf("%f", &r);
	a= 3.141592*r*r;
	printf("Area do circulo %f  ", a);
	return(0);
}
