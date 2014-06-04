#include <stdio.h>
void fribonaci(){
	int numero,soma1,soma2,total,i=0,j=1;	
	while (total<4000000){
		i=i+j;
		j=j+i;
		if (((i%2)==0)||((j%2)==0)){
			soma1=soma1+i;
			soma2=soma2+j;
			total=soma1+soma2;
		}
	}
	printf("A soma ds numeros pares da sequencia de Fribonaci = %d\n",total);
	system("pause");
	return ;
}
int main(){
	fribonaci();
	return 0;
}
