//PROGRAMA PARA DETERMINAR SE UM NUMERO É PALINDROMO
#include <stdio.h>
int main(){
 	int i,j,maior=0;
 	int digitado,num,invertido,digito;
	for (i=100;i<1000;i++){
		for (j=101;j<1000;j++){
			digitado=i*j;
 			num = digitado;
 			invertido = 0;
			while(num != 0){
    			digito = num % 10;
    			invertido = (invertido * 10) + digito;
    			num = num / 10;
 			}
	 		if(digitado == invertido){
				if (maior<invertido)
					maior=invertido;
			}
		}
	}
	printf("Maior numero Palindromo %d\n ",maior);
 	system ("pause");    
}
