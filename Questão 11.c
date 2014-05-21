/*Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não
se aposentar. As condições para aposentadora são:Ter pelo menos 65 anos, ou ter
trabalhado pelo menos 30 anos, ou ter pelo menos 60 anos e trabalhado pelo menos 25
anos.*/

#include<stdio.h>

int idade(int anos,int tempo){
		if((anos>=65) || (tempo>=30) || ((anos>=60) && (tempo>=25)))
		printf("Pode se aponsentar");
	else
		printf("Nao pode se aposentar");
}
		
int main(){
	int id,temp;
	printf("Digite sua idade e seu tempo de servico \n");
	scanf("%d%d",&id,&temp);
	idade(id,temp);
}
