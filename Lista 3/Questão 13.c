//13°
int contagem_regressiva(){
	int aux=1,num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	printf("%d",num);
	while (num!=0){
		num=num-aux;
		printf("\n%d",num);		
	}	
	printf("\nFIM");
	return 0;
}
int main(){
	contagem_regressiva();
	return 0;
}
