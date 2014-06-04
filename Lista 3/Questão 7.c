#include <stdio.h>
void primos(){
	int p,i,num=0;
	while (num<=1){ 
		printf("Digite um numero N>1\n");
		scanf("%d",&num);
		if (num>1){
			for (i=2;i<num;i++){
				p=num%i;
				if (p==0)		
				break;		
			}
			if(p!=0)
				printf("\n\nO numero %d e primo", num);
			else
				printf("\n\nO numero %d nao e primo", num); 
		}
		else
			printf("Numero invalido, Digite um numero valido...\n");			
		}
	return;
}
int main(){
		primos();
		return 0;
}
