/*A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total: O primeiro ganhador recebera 46%; O segundo recebera
32%; O terceiro recebera o restante; Calcule e imprima a quantia ganha por cada um
dos ganhadores*/

#include <stdio.h>
int n=780000;
float ganhador1(float pri){	
	return(pri=n*0.46);
}
float ganhador2(float seg){	
	return(seg=n*0.32);
}
float ganhador3(float ter){	
	return(ter=n*0.22);
}

int main(){
	
char nome1[15],nome2[15],nome3[15];
float a,b,c;
printf("Digite o nome dos ganhadores\n");
    printf("Ganhador 1\n");
    scanf("%s",&nome1);
    printf("Ganhador 2\n");
    scanf("%s",&nome2);
    printf("Ganhador 3\n");
    scanf("%s",&nome3);
printf("1 lugar : %s ganhou a quantia de %.2f\n",nome1,ganhador1(a));
printf("2 lugar : %s ganhou a quantia de %.2f\n",nome2,ganhador2(b));
printf("3 lugar : %s ganhou a quantia de %.2f\n",nome3,ganhador3(c));
return(0);
}
