/*Receber o salario de um funcionário, calcular e mostrar seu novo salário, sabendo que
ele recebeu um aumento de 25%.*/

#include <stdio.h>

float salfuncionario(float sal ){
return((sal*0.25)+sal);
}
int main()
{
	float sal1;
	printf("Digite o valor do seu salario\n");
	scanf("%f",&sal1);
	printf("Seu salario sofreu um aumento de 25 porcento e ficou igual %.2f",salfuncionario(sal1));
	return(0);
}

