/*Efetuar a leitura de trés valores e apresentar como resultado final a soma dos
quadrados dos três valores lidos*/


#include<stdio.h>

float quadrado(float num1){
return (num1*num1);
}
float resultado(float a, float b,float c){
	float total;
	total = quadrado(a) + quadrado(b) +quadrado(c);
	return total;
}

int main()
{
float n1,n2,n3;
printf("Digite 3 valores : \n");
scanf("%f%f%f",&n1,&n2,&n3);
printf("Soma dos quadrados dos 3 valores lidos %.2f",resultado(n1,n2,n3) );
return(0);


}
