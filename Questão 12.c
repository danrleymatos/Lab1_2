#include<stdio.h>

int main()

{
	float v, h;
	printf("Digite o valor que voce ganha por hora\n");
	scanf("%f", &v);
	printf("Digite quantas horas de trabalho\n");
	scanf("%f", &h);
	printf("Salario do mes %f", v*h);
	return(0);
}
