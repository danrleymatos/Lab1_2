#include <stdio.h>

int main(){
	int menu;
	float a,b;
	printf("Escolha um opcao: \n 1-Soma de dois numeros \n 2-Diferenca entre dois numeros (maior pelo menor) \n 3-Produto entre dois numeros \n 4-Divisao entre dois numeros (o denominador nao pode ser zero)");
	scanf("%d",&menu);
	switch menu {
		case 1:
		printf("Informe os numeros");
		scanf("%f %f",&a,&b);
		printf("A soma eh: %.2f",(a+b));
		break;
		case 2:
		printf("Informe os numeros");
		scanf("%f %f",&a,&b);
		if(a<b)
		printf("A diferenca eh: %.2f",(b-a));
		else
		printf("A diferenca eh : %.2f",(a-b));
		break;
		case 3:
		printf("Informe os numeros");
		scanf("%f %f",&a,&b);
		printf("O produto eh: %.2f",(a*b));
		break;
		case 4:
		printf("Informe os numeros");
		scanf("%f %f",&a,&b);
		printf("A divisao eh: %.2f",(a/b));
		break;
		default:
		printf("Opcao escolhida invalida");
		break;
		}
	return(0);
	}
	
	
	
}
