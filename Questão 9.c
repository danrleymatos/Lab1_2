/*Receber o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo, se a
presta��o for maior que 20% do sal�rio imprima: �Empr�stimo n�o concedido�, caso
contrario imprima: �Empr�stimo Concedido�*/

#include<stdio.h>
float salario(float sal, float pres){ 
    if ((sal*0.20)<(pres)){ 
        printf("Emprestimo Nao Concedido"); 
    } 
    else 
        printf("Emprestimo Concedido"); 
} 
int main()
{ 
    float sal2,pres2; 
    printf("Digite o valor do seu salario :\n"); 
    scanf("%f",&sal2); 
    printf("Digite o valor da prestacao do emprestimo :\n"); 
    scanf("%f",&pres2); 
    salario(sal2,pres2); 
    return(0);
}
