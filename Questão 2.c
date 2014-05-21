/*Ler um numero e retorne seu antecessor e seu sucessor*/


#include<stdio.h>

int antecessor(int num)
{
	
    return(num-1);
}

int sucessor(int num)
{
	
	return(num+1);

}

int main()
{
	int x;
	printf("Digite um numero\n");
	scanf("%d",&x);
	printf("Antecessor %d\n",antecessor(x));
	printf("Sucessor %d\n",sucessor(x));
	return(0);
}
