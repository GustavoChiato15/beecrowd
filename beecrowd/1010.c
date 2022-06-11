# include<stdio.h>

int main(void)
{
	unsigned short int id_prod, qtd_produto, cont_produtos;
	float total, preco_unit;
	cont_produtos = total = 0;
	while (cont_produtos < 2)
	{
		scanf("%hu", &id_prod);
		scanf("%hu", &qtd_produto);
		scanf("%f", &preco_unit);
		total += (qtd_produto*preco_unit);
		cont_produtos++;
	}
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	return 0;
}
