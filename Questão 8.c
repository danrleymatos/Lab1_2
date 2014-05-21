/*Faça um programa para ler um numero inteiro, positivo de três dígitos, e gerar outro
numero formado pelos dígitos invertidos do numero lido.*/

#include<stdio.h>

int invert(int num){
	int uni,dez,cent,inv;
	uni = num%10;
	dez = (num/10)%10;
	cent = (num/10)/10;
	inv = (uni*100) + (dez*10) + cent;
	printf("O numero invertido e: %d",inv);
}

int main(){
	int x;
	printf("Digite o numero\n");
	scanf("%d",&x);
	invert(x);
	return(0);

} 
