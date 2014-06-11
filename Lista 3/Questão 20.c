#include <stdio.h>

int Maior(int N1){
		printf ("O maior valor:-> %d",N1);
		return(0);
	}
int valor(){	
int n[10],i,maior=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&n[i]);
		if (n[i]>maior)
			maior=n[i];
	}	
	Maior(maior);
	return(0);
}

int main(){
	int N;
	printf("Digite 10 numeros inteiros:\n\n");
	scanf("%d",&N);
	valor(N);
	return(0);
}
