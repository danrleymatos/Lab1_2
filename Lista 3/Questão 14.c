#include <stdio.h>
int soma(){
	int cont=0,num,soma=0;
	printf("Digite 10 numeros inteiros\n");
	while (cont<10){
		cont=cont+1;
		scanf("%d",&num);
		soma=soma+num;		
	}
	printf("Soma dos 10 numeros digitados = %d\n",soma);
	system ("pause");
	return 0;
}
int main(){
	soma();
	return 0;
}
