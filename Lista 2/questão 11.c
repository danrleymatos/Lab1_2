#include <stdio.h>

int main (){
	int idade, tmp_servico;
	printf("Informe sua idade e tempo de servico");
	scanf("%d %d",&idade,&temp_servico);
	if((idade>=65) || (tmp_servico>=30) || ((idade>=60) && (tmp_servico>=25)))
		printf("Pode se aponsentar");
	else
		printf("Nao pode se aposentar");
	return(0);

}