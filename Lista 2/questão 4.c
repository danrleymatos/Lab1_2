#include <stdio.h>

int main(){
	float salario;
	printf("Informe seu seu salario:");
	scanf("%f",&salario);
	printf("Seu novo salario: %.2f",(salario+(salario*0.25)));
	return(0);
}