/*Escreva o menu de op��es abaixo, leia a op��o do usu�rio e execute a opera��o
escolhida Escreva uma mensagem de erro se a op��o escolhida for invalida.
1- Soma de 2 n�meros.
2- Diferen�a entre 2 n�meros (maior pelo menor).
3- Produto entre 2 n�meros.
4- Divis�o entre 2 n�meros (o denominador n�o pode ser zero).*/

#include<stdio.h>

int menu (int opcao){ 
    switch (opcao){
        int a,b; 
        case 1:
		 	printf("Digite os numeros\n");
			scanf("%d\n%d",&a,&b);
			printf("A soma e : %d",(a+b));
			break;
		case 2:
			printf("Digite os numeros\n");
			scanf("%d\n%d",&a,&b);
			if(a<b)
			printf("A diferenca e : %d",(b-a));
		else
		printf("A diferenca e : %d",(a-b));
		break;
		case 3:
		printf("Digite os numeros\n");
		scanf("%d\n%d",&a,&b);
		printf("O produto e : %d",(a*b));
		break;
		case 4:
		printf("Digite os numeros\n");
		scanf("%d\n%d",&a,&b);
		printf("A divisao e : %d",(a/b));
		break;
		default:
		printf("Opcao escolhida invalida");
		break;
	}
}
			int main() 
			{
			int opc;
			printf("Escolha uma opcao : \n 1-Soma de dois numeros \n 2-Diferenca entre dois numeros (maior pelo menor) \n 3-Produto entre dois numeros \n 4-Divisao entre dois numeros (o denominador nao pode ser zero)\n");
			scanf("%d",&opc); 
    		menu(opc);
			return(0); 
    		}

