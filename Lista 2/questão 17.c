#include <stdio.h>

int imc(float peso,float alt){
	float imc1;
 	imc1=((peso)/(alt*alt));
	if (imc1 <= 18.5)
	{
		printf("Abaixo do peso");
	}
	else if (imc1 >= 18.5 && imc1 <=24.9)
	{
		printf("Saudavel");
	}
	else if (imc1 >= 25 && imc1 <= 29.9)
	{
		printf("Peso em excesso");
	}
	else if (imc1 >= 30 && imc1 <= 34.9)
	{
		printf("Obesidade grau 1");
	}
	else if (imc1 >= 35 && imc1 <= 39.9)
	{
		printf("Obesidade grau 2");
	}
	else if (imc1 >= 40)
	{
		printf("Obesidade grau 3");
	}

}
int main(){
	float pso,altu;
	printf("Digite seu Peso\n");
	scanf("%f",&pso);
	printf("Digite sua Altura\n");
	scanf("%f",&altu);
	imc(pso,altu);
	return(0);
}
