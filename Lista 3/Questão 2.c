#include <stdio.h>
float consumidor (float h, float k ){
	float consumo,total=0,maior=0,menor=10000,residencial=0,comercial=0,industrial=0;
	int i=0,opcao=0,codigo;
	while (opcao!=2){	
		i=(i+1);
		printf("Digite o Consumo do mes do consumidor %d:\n ",i);
		scanf("%f",&consumo);
		total=(total+(consumo*k));
		if (consumo>maior)
			maior=consumo*k;
		if (consumo<menor)
			menor=(consumo*k);			 	
		printf("Digite  codigo do consumidor %d:\n1-RESIDENCIAL\n2-COMECIAL\n3-INDUSTRIAL\n ",i);
		scanf("%d",&codigo);
		switch(codigo){
			case 1:{
				residencial=residencial+(consumo*k);
				break;
			}
			case 2:{
				comercial=comercial+(consumo*k);
				break;
			}
			case 3:{
				industrial=industrial+(consumo*k);		
				break;
			}
				
		}
		printf("Digitar outro consumidor \n1-Sim\n2-Nao\n->");
		scanf("%d",&opcao);	
	}
		printf("\nMAIOR CONSUMO = %f",maior);
		printf("\nMENOR CONSUMO = %f",menor);
		printf("\nMEDIA DE CONSUMO = %f",(total/h));
		printf("\nCONSUMO RESIDENCIAL = %f",residencial);
		printf("\nCONSUMO COMERCIAL = %f" ,comercial);
		printf("\nCONSUMO INDUSTRIAL = %f",industrial);
} 
int main(){
	float habitantes,kwh;
	printf("Digite os numeros de habitantes da cidade\n");
	scanf("%f",&habitantes);
	printf("Digite o valor kwh\n");
	scanf("%f",&kwh);
	consumidor(habitantes,kwh);
	return(0);
	}

