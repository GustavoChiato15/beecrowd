# include<stdio.h>

int main(void)
{
	int valor, cont, qtd_pares;
	qtd_pares = 0;
	for(cont = 1; cont<=5; cont++)
	{
		scanf("%d", &valor);
		if(valor % 2 == 0)
		{
			qtd_pares += 1;
		}
	}
	printf("%d valores pares\n", qtd_pares);
	return 0;
}
