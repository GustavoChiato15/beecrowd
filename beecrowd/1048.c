# include<stdio.h>

int main(void)
{
	float salario, reajuste_ganho;
	int pct_reajuste;
	scanf("%f", &salario);
	if(0 <= salario && salario <=400)
	{
		pct_reajuste = 15;
		reajuste_ganho = salario * 0.15;
	}
	else if(salario > 400 && salario <= 800)
	{
		pct_reajuste = 12;
		reajuste_ganho = salario * 0.12;
	}
	else if(salario > 800 && salario <= 1200)
	{
		pct_reajuste = 10;
		reajuste_ganho = salario * 0.10;
	}
	else if(salario > 1200 & salario <= 2000)
	{
		pct_reajuste = 7;
		reajuste_ganho = salario * 0.07;
	}
	else if (salario > 2000)
	{
		pct_reajuste = 4;
		reajuste_ganho = salario * 0.04;
	}
	printf("Novo salario: %.2f\n", salario+reajuste_ganho);
	printf("Reajuste ganho: %.2f\n", reajuste_ganho);
	printf("Em percentual: %d %%\n", pct_reajuste);
}
