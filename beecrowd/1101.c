# include<stdio.h>
int main(void)
{
	int M, N, maior, menor, soma;
	do
	{
		soma = 0;
		scanf("%d", &M);
		maior = M;
		menor = M;
		scanf("%d", &N);
		maior = N > maior ? N : maior;
		menor = N < menor ? N : menor;
		if(M <= 0 || N <= 0)
		{
			break;
		}
		for(; menor <= maior; menor++)
		{
			printf("%d ", menor);
			soma += menor;
		}
		printf("Sum=%d\n", soma);

	}
	while(M > 0 && N > 0);
	return 0;
}
