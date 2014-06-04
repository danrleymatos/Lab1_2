#include <stdio.h>
int conts(char string[], char letra)
  {
    int contador,tamanho,ocorrencia = 0;
    tamanho = strlen(string);
    for(contador=1;contador <= tamanho;contador++){
      if((string[contador])== 1)
         ocorrencia++;
    return(ocorrencia);
  }
}
int main(){
	int cont;	
	conts(cont);
	printf("Numero de 1's = %d ",cont);		
	return 0;	
}		
