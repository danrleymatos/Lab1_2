
#include <stdio.h>

int main()

{
	float n1,n2,n3;
	printf("Digite dois numeros inteiros e um real\n");
	scanf("%f%f%f",&n1,&n2,&n3);
	printf("\nO produto do dobro do primeiro com metade do segundo = %f\n",(n1*2)*(n2/2));
	printf("\nA soma do triplo do primeiro com o terceiro = %f\n",((n1*3)+n3));
	printf("\nO terceiro elevado ao cubo = %f\n",(n3*n3*n3));
	return(0);
}

