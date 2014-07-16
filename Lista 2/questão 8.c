#include <stdio.h>


int main(int argc, char **argv)
{
	int num,invert,uni,dezena,cent;
	printf("Informe o numero:");
	scanf("%d",&num);
	uni = num%10;
	dezena = (num/10)%10;
	cent = (num/10)/10;
	invert = (uni*100) + (dezena*10) + cent;
	printf("O numero invertido eh: %d",invert);
	return 0;
}

