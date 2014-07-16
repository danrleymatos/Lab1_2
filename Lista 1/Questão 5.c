#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()

{
	char v[12];
	char t[12];
	printf("Digite uma palavras \n" );
	gets(v);
	printf("Digite uma palavras \n" );	
	gets(t);
	printf("%s\n%s\n", v , t);
	printf("%c\n%s\c", v[1] , t[1]);
	return(0);

	
	
}
