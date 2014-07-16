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

int main(){
	int chegada_a, chegada_b,partida_a,partida_b,count,t_hora;
	float acum=0;
	t_hora = 0;
	printf("Informe a hora de chegada");
	scanf("%d %d",&chegada_a,&chegada_b);
	printf("Informe a hora de partida");
	scanf("%d %d",&partida_a,&partida_b);
	if(partida_a<chegada_a)
		t_hora = t_hora + (partida_a + 24) - chegada_a;
	if(partida_b>chegada_b)
		t_hora++;
	for(count=0;count=t_hora;count++){
		if((count=1) || (count=2))
			acum = acum + 1.0;
		else if((count=3) ||(count=4))
			acum = acum + 1.4;
		else if(count>=5)
			acum = acum + 2.0;
	}
	printf("O valor total a ser pago eh: %.2f",acum);
	return(0);	
}
