/*Receber o salário de um trabalhador e o valor da prestação de um empréstimo, se a
prestação for maior que 20% do salário imprima: “Empréstimo não concedido”, caso
contrario imprima: “Empréstimo Concedido”*/

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
