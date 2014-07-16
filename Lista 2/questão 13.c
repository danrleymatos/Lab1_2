#include <stdio.h>

int main ()
{
	float venda, comi,vnd;
	scanf("%f", &venda);
	if (venda >= 100000)
	{
		comi = 700 + (venda*0.16);
		printf("%.2f", comi);
	}
	else if ((venda<100000) && (venda>=80000))
	{
        comi = 650 + (venda*0.14);
		printf("%.2f", comi);
	}

	else if ((vnd<80000) && (venda>=60000))
	{
        comi = 600 + (venda*0.14);
		printf("%.2f", comi);
	}

	else if ((venda<60000) && (vnd>=40000))
	{
        comi = 550 + (venda * 0.14);
		printf("%.2f", comi);
	}
	else if ((venda<40000) && (venda>=20000))
	{
        comi = 500 + (vnd * 0.14);
		printf("%.2f", comi);
	}
	else if (venda<20000)
	{
        comi = 400 + (venda*0.14);
		printf("%.2f", comi);
	}

return (0);
}
