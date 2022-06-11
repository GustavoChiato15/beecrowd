# include<stdio.h>
int main(void)
{
	int qtd_num, valor_atual, cont, qtd_in, qtd_out;
	qtd_in = qtd_out = 0;
	scanf("%d", &qtd_num);
	for(cont = 1; cont <= qtd_num; cont++)
	{
		scanf("%d", &valor_atual);
		if(10 <= valor_atual && valor_atual <= 20)
		{
			qtd_in += 1;
		}
		else
		{
			qtd_out += 1;
		}
	}
	printf("%d in\n", qtd_in);
	printf("%d out\n", qtd_out);
	return 0;
}
