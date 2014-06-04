#include <stdio.h>
int divisores(){
	int i,num;
	printf("Digite um numero positivo\n");
	scanf("%d",&num);
	for (i=0;i<=num;i++){
		if ((num%i)==0)
			printf("%d",i);
	}
	return 0;
}
int main(){
	divisores();
	return 0;
}
