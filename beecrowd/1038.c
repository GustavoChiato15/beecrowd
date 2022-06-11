# include<stdio.h>

int main(void)
{
	int cod_item, qtd_item;
	scanf("%d", &cod_item);
	scanf("%d", &qtd_item);
	switch(cod_item)
	{
		case 1:
			printf("Total: R$ %.2f\n", 4.0*qtd_item);
			break;
		case 2:
			printf("Total: R$ %.2f\n", 4.5*qtd_item);
			break;
		case 3:
			printf("Total: R$ %.2f\n", 5.0*qtd_item);
			break;
		case 4:
			printf("Total: R$ %.2f\n", 2.0*qtd_item);
			break;
		case 5:
			printf("Total: R$ %.2f\n", 1.5*qtd_item);
			break;
	}
}
