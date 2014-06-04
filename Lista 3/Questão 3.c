//3º//
#include <stdio.h>
void fribonaci(){
	int numero,i=0,j=1;
	printf("Digite um numero inteiro : ");
	scanf("%d",&numero);
	//printf("Sequencia de Frinonaci do numero %d = ",numero);//	
	for (i;numero;i++){
		i=i+j;
		j=j+i;
		printf("%d%d",i,j);
	}
}
int main(){
	fribonaci();		
	return 0;
}
