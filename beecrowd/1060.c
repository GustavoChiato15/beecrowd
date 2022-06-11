# include<stdio.h>

int main(void)
{
	int cont, qtd_pos;
	float valor;
	qtd_pos = 0;
	for(cont = 1; cont <= 6; cont++)
	{
		scanf("%f", &valor);
		if (valor > 0)
		{
			qtd_pos += 1;
		}
	}
	printf("%d valores positivos\n", qtd_pos);
}
