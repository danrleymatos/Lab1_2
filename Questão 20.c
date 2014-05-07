#include<stdio.h>

int main()
{
	float tam, velom, velolink ;
	printf("Digite o tamanho do arquivo\n");
	scanf("%f", &tam);
	printf("Digite a velocidade\n");
	scanf("%f", &velolink);
	velom=velolink*60;
	printf("Tempo gasto%f", tam/velom);
	return(0);
}
