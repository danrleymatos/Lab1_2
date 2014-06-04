#include <stdio.h> 
//Faça um programa que calcule a soma dos 50 primeiros números pares

int soma_50(){
	int soma=0,i;
	for(i=2; i<=50; i=i+2){
		soma=soma+i;
	}
	return(soma);
} 


int main(){
	printf("A soma dos 50 primeiros numeros pares e = %d\n",soma_50());
	system("pause");
	return(0);
}
