# include <stdio.h>

int main(void)
{
	unsigned short int maior, a, b, c;
	scanf("%hu", &a);
	maior = a;
	scanf("%hu",&b);
	maior = maior < b ? b : maior;
	scanf("%hu", &c);
	maior = maior < c ? c : maior;
	printf("%hu eh o maior", maior);
}

