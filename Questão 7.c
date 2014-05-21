/*Sejam a e b os catetos de um triangulo,faça um programa que entre com os valores de
a e b, e ache o valor da hipotenusa e imprima o resultado.*/

#include<stdio.h>
#include <math.h>
float hipo (float a,float b, float c){
    return(c=sqrt((a*a)+(b*b)));
}
int main()
{
    float cat1,cat2,h;
    printf("Digite o valor do cateto 1\n");
    scanf("%f",&cat1);
    printf("Digite o valor do cateto 2\n");
    scanf("%f",&cat2);
    printf("Hipotenusa igual %.2f",hipo(cat1,cat2,h));
    return 0;
}
