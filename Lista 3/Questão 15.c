//15º
#include <stdio.h>
int soma(){
	int soman=0,i;
	for(i=0;i<1000;i++){
		if ((i%3)&&(i%5))
			soman=soman+i;
	}
	printf("A Soma dos numeros multiplos de 3 e 5  menores que 1000 = %d\n",soman);
	system("pause");
	return 0;
}
int main (){
	soma();
	return 0;
}
