#include <stdio.h>

int main()

{
	int quilos=0,excesso,multa;
	printf("Digite a quantidade de quilos de peixes\n");
	scanf("%d",&quilos);
	if (quilos>50){	
		excesso=(quilos-50);
		multa=excesso*4;
		printf("Excesso de quilos = %d",excesso);
		printf("\nMulta a pagar = %d \n",multa);
	}
	else
		printf ("Excesso= 0 \nMulta a pagar = 0\n");
	system("pause");
}
	
