/*14. As tarifas de certo parque de estacionamento são as seguintes: 1.a e 2.a hora - R$
1,00 cada 3.a e 4.a hora - R$ 1,40 cada 5.a hora e seguintes - R$ 2,00 cada. O numero
de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem
estacionar durante 61 minutos pagara por duas horas, que é o mesmo que pagaria se
tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida deste
são apresentados na forma de pares de inteiros, representando horas e minutos.Por
exemplo, o par 12 50 representara ”dez para a uma da tarde”. Pretendesse um
programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela
o preço cobrado pelo estacionamento. Devera haver validação de dados. Admite-se que
a chegada e a partida se dão com intervalo não superior a 24 horas (mas cujo controle
de verificação não passa pelo programa aqui em causa). Portanto, se uma dada hora
de ˜chegada for superior a da partida, isso não é uma situação de erro, significará que a
partida ocorreu no dia seguinte ao da chegada.*/

#include <stdio.h>
int tempo(int hs,int he,int ms,int me){
	int horas,minutos;
	horas=hs-he;
	minutos=ms-me;
	if (horas=0)
	{
		horas=horas++;
	}	
	return(horas);
}
int tarifas(int tp){	
	switch (tp){
		case 1:
			printf("\nvalor cobrado = R$ 1,00");	
		case 2:
			printf("\nvalor cobrado = R$ 2,00");
		case 3 :
			printf("\nvalor cobrado = R$ 4,20");
		case 4:
			printf("\nvalor cobrado = R$ 5,60");
		case 5:
			printf("\nvalor cobrado = R$ %d",tp*2);	
	}	
}
int main(){
	int hora_entrada,minutos_entrada,hora_saida,minutos_saida,tempo_permanencia;
	printf("ESTACIONAMENTO");
	printf("\nDigite o horario de entrada do carro");
	printf("\nHora-> ");
	scanf("%d",&hora_entrada);
	printf("MINUTOS->");
	scanf("%d",&minutos_entrada);	
	printf("Digite o horario de saida do carro");
	printf("\nHora->");
	scanf("%d",&hora_saida);
	printf("MINUTOS->");
	scanf("%d",&minutos_saida);
	tempo_permanencia=tempo(hora_saida,hora_entrada,minutos_saida,minutos_entrada);
	printf("o tempo de permanencia do carro foi = %d",tempo_permanencia);
	tarifas(tempo_permanencia);
}
