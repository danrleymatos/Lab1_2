/*1.Efetuar a leitura de um numero real e apresentar o resultado do quadrado desse numero*/
#include<stdio.h>

int quadrado(float num)
{
num=num*num*num*num;
return num;
}
int main()

{
	float num;
	printf("Digite um numero\n");
	scanf("%f",&num);
	num = quadrado(num);
	printf("Resultado %f",num);
	return(0);
} 
