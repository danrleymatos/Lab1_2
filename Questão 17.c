
#include <stdio.h>
int main()
{
	float p,al,r;
	char sexo[15];
	printf("Digite sua altura\n");
	scanf("%f",&al);
	printf("Digite seu peso\n");
	scanf("%f",&p);
	printf("Digite seu sexo M ou F\n");
	scanf("%s",&sexo);
	if (sexo == 'masculino') {
		r=((72.7*al) - 58);
		if (p>r)
			printf("Seu Peso ideal = %f",r,"Voce esta acima do peso ideal"); 
		if (p<r)
			printf("Seu Peso ideal = %f",r,"Voce esta abaixo do peso ideal");
		else
			printf("Seu Peso ideal = %f",r,"Voce esta no peso ideal");
		
}
	else{
		r=((62.1*al) - 44.7);
		if (p>r)
			printf("Seu Peso ideal = %f",r,"Voce esta acima do peso ideal"); 
		if (p<r)
			printf("Seu Peso ideal = %f",r,"Voce esta abaixo do peso ideal");
		else
			printf("Seu Peso ideal = %f",r,"Voce esta no peso ideal");
}
	return(0);
}

