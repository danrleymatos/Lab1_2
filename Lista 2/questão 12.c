#include <stdio.h>
#include <math.h>

int main(){
	int menu,opcao;
	float a,b,c,aux;
	printf("Escolha um opcao: \n 1-Media Geometrica \n 2-Media Ponderada \n 3-Media Harmonica \n 4-Media Aritmetica\n");
	scanf("%d",&menu);
	switch (menu) {
		case 1:
		printf("Informe os numeros");
		scanf("%f %f %f",&a,&b,&c);
		aux = pow((a*b*c),1/3);
		printf("A media geometrica eh: %.2f",aux);
		break;
		case 2:
		printf("Informe os numeros");
		scanf("%f %f %f",&a,&b,&c);
		aux = (a+(2*b)+(3*c))/6;
		printf("A media ponderada eh : %.2f",aux);
		break;
		case 3:
		printf("Informe os numeros");
		scanf("%f %f %f",&a,&b,&c);
		aux = 1/((1/a)+(1/b)+(1/c));
		printf("A media harmonica eh: %.2f",aux);
		break;
		case 4:
		printf("Informe os numeros");
		scanf("%f %f %f",&a,&b,&c);
		aux = ((a+b+c)/3);
		printf("A media aritmetica eh: %.2f",aux);
		break;
		default:
		printf("Opcao escolhida invalida");
		break;
		}
	return(0);
	}
