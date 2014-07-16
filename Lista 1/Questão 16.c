/*Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58*/
#include <stdio.h>

int main()
{
	float al;
	printf("Digite Sua altura:");
	scanf("%f",&al);
	printf("Seu peso ideal = %f",((72.7*al)-58));
	return(0);
}
