#include <stdio.h>

int main(){
	int n;
	printf("informe um numero:");
	scanf("%d",&n);
	printf("O antecessor do numero eh: %d e o seu sucessor eh: %d",(n-1),(n+1));
	return(0);
}