#include <stdio.h>

int main(){
	float salario, prestacao;
	printf("Entre com o salario e a prestação:");
	scanf("%f %f",&salario,&prestacao);
	if((salario*0.20)<prestacao)
	printf("Emprestimo nao consedido");
	else
	printf("Emprestimo consedido");
	return(0);
}