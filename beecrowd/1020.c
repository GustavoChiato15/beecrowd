#include <stdio.h>
int main()
{
	int idadeDias, mes =0, ano = 0;
	scanf("%d", &idadeDias);
	while(idadeDias>= 365)
	{
		idadeDias-= 365;
		ano++;
	}
	while(idadeDias >=30)
	{
		idadeDias-= 30;
		mes++;

	}	

	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n",idadeDias);
}
