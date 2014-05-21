/*Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite
o numero de dias trabalhados pelo encanador e imprima a quantia liquida que devera
ser paga, sabendo-se que são descontados 8% para imposto de renda.*/

#include <stdio.h>

float quantdias(float qtdias){
	return((qtdias*30)-((qtdias*30)*0.08));	
}
int main (){
	float n;
	printf("Informe a quantidade de dias trabalhados:\n");
	scanf("%f",&n);
	printf("A quantidade a receber : %.2f",(quantdias(n)));
	return(0);
}
