#include <stdio.h>
float medianumeros(float ns,float cn) {
	printf("A media dos numeros digitados = %f",(ns/cn));
	return 0;
}
int	somadosnumeros(int n){
	printf("A soma dos numeros digitados = %d",n);
	return(n);
}	
int contnumeros(int c){
	printf("Foram digitados %d Numeros",c);
	return(c);
}
int maiornumero(int m){
	printf(" O maior numero digitado = %d",m);
	return 0;
}		
int menornumero(int M){
	printf("O menor numero Digitado %d",M);	
	return 0;
	}
float mediapares(float snp,float cp){
		printf("A media dos numeros pares %.2f ",(snp/cp));
		return 0;
	}		
int menu(int nsoma,int ncont,int nmaior,int nmenor,int snump,int scontp){
	int opcao;
	printf("1-A soma dos numeros digitados\n2-A quantidade de numeros digitados\n3-A media dos numeros digitados\n4-O maior numer digitado\n5-O menor numero digitado\n6-A media dos numeros pares\n");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			somadosnumeros(nsoma);
			break;
		case 2:
			contnumeros(ncont);	
			break;
		case 3:
			medianumeros(nsoma,ncont);
			break;
		case 4:
			maiornumero(nmaior);
			break;
		case 5:
			menornumero(nmenor);
			break;
		case 6:
			mediapares(snump,scontp);
			break;	
	}
	return 0;
}		 
int main(){
	int num=1,soma=0,cont=0,maior=0,menor=1000000,nump=0,contp=0;
	printf("Digite numeros inteiros Digite 0 para parar\n");
	while(num!=0){
		scanf("%d",&num);
		soma=soma+num;
		if (num==0)
			break;
			cont=(cont+1);
		if (num>maior)
			maior=num;
		if (num<menor)
			menor=num;
		if ((num%2)==0){
			nump=nump+num;
			contp=(contp+1);
		}	
	}
		menu(soma,cont,maior,menor,nump,contp);
		return 0;
}
