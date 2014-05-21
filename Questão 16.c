/*16. Fac um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde h corresponde a altura):*/

#include<stdio.h>

float peso_ideal(float alt, char sexo){
float peso;
	if (sexo == 'm'){
		peso = ((72.7*alt)-58); 
		printf("Seu peso ideal e : %.2f", peso);	
		}
	else {
		peso = ((62.1*alt)-44.7);
		printf("Seu peso ideal e : %.2f", peso);
		}
	
}

int main(){
	float a;
	char sex;
	printf("Digite sua altura e sexo(m ou f):\n");
	scanf("%f %c",&a,&sex);
	peso_ideal(a,sex);
	return(0);
}

