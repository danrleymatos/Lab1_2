#include<stdio.h>

int numero(int n1){
	int n = 1,maior=0,menor=0;
	while(n>=0){
		scanf("%d",&n);	
		if(n<menor &&n >=0)
		menor=n;
		if(n>maior)
		maior=n;
	}
	printf("Menor numero %d\n",menor);
	printf("Maior numero %d\n",maior);
	}

int main(){
	int a;
	printf("Digite Numeros inteiros\n");
	scanf("%d",&a);
	numero(a);
	system("pause");
	return(0);
}
	
	/*int n,menor,maior;
	printf("Digite um numero\n");
	scanf("%d",&n);
	menor=maior=n;
	while (n>=0){
		if (n < menor &&n >= 0)
			menor=n;
		if(n > maior)
		maior=n;	
	}
	printf("Menor numero = %d\n",menor);
	printf("Maior numero = %d\n",maior);*/

