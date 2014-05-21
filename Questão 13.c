/*13. . Considere a tabela abaixo, Escreva um programa que, dado o valor da venda, imprima
a comissão que deverá ser paga ao vendedor.*/
#include <stdio.h>
float comissao(float v){
    if (v>=100000)
        printf("Comissao ganha %.2f",(700+(v*0.16)));
    if ((v<100000) && (v>=80000))
        printf("Comissao ganha %.2f",(650+(v*0.14)));
    if ((v<80000) && (v>=60000))
        printf("Comissao ganha %.2f",(600+(v*0.14)));
    if ((v<60000) && (v>=40000))
        printf("Comissao ganha %.2f",(550+(v*0.14)));
    if ((v<40000) && (v>=20000))
        printf("Comissao ganha %.2f",(500+(v*0.14)));
    if (v<20000) 
        printf("Comissao ganha %.2f",(400+(v*0.14)));
     
}
int main(){
    float venda;
    printf("Digite o valor da venda\n");
    scanf("%f",&venda);
    comissao(venda);
}
