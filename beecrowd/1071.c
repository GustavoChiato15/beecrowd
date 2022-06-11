# include<stdio.h>
int main(void)
{
	int x, y, menor, maior, soma, cont;
	scanf("%d", &x);
	maior = menor = x;
	scanf("%d", &y);
	maior = y > maior ? y : maior;
	menor = y < menor ? y : menor;
	soma = 0;
	for(cont=menor+=1; cont < maior; cont++)
	{
		if (cont % 2 != 0)
		{
			soma += cont;
		}
	}
	printf("%d\n", soma);
}
