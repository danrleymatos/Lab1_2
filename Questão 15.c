/*15. Fa�a uma prova de matem�tica para crian�as que est�o aprendendo a somar n�meros
inteiros menores do que cem. Escolha n�meros aleat�rios entre 1 e 100, e mostre na
tela a pergunta: qual e a soma de �a�+ �b�, onde �a� e �b�s�o os n�meros aleat�rios.
Pe�a resposta. Faca cinco perguntas ao aluno, e mostre para ele as perguntas e as
respostas corretas, alem de quantas vezes o aluno acertou.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    int i,x,y,result,acertos;
    printf("intervalo da rand: [0,%d]\n", RAND_MAX);
	        acertos=0;
    for(i=1 ; i <= 5 ; i++){ 

        srand( (unsigned)time(NULL) );
        x = 1 + ( rand() % 100 );
		y = 1 + ( rand() % 100 );
		printf("\nQual a soma Soma de %d + %d :\n",x,y);
		scanf("%d",&result);
		if (x+y==result){
			printf("VOCE ACERTOU :)\n");
			acertos=acertos++;
		}
		else
			printf("VOCE ERROU :(\n");
	}   
	printf("\nTotal de acertos = %d",acertos);
}
