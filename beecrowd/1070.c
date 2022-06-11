# include<stdio.h>
int main(void)
{
	int valor_inicial, qtd_impares;
	qtd_impares = 0;
	scanf("%d", &valor_inicial);
	while (qtd_impares < 6)
	{
		if(valor_inicial % 2 == 1)
		{
			printf("%d\n", valor_inicial);
			qtd_impares += 1;
		}
		valor_inicial++;
	}
	return 0;
}
