# include<stdio.h>

int main(void)
{
	int N, cont;
	do
	{
	scanf("%d", &N);
	}while(0> N || N > 1000000);
	printf("%d\n", N);
	while( N >= 100)
	{
		N -=100;
		cont ++;
	}
	printf("%d nota(s) de R$ 100,00\n", cont);
	cont = 0;
	while( N >= 50)
	{
		N -=50;
		cont ++;
	}
	printf("%d nota(s) de R$ 50,00\n", cont);
	cont = 0;
	while( N >= 20)
	{
		N -=20;
		cont ++;
	}
	printf("%d nota(s) de R$ 20,00\n", cont);
	cont = 0;
	while( N >= 10)
	{
		N -=10;
		cont ++;
	}
	printf("%d nota(s) de R$ 10,00\n", cont);
	cont = 0;
	while( N >= 5)
	{
		N -=5;
		cont ++;
	}
	printf("%d nota(s) de R$ 5,00\n", cont);
	cont = 0;
	while( N >= 2)
	{
		N -=2;
		cont ++;
	}
	printf("%d nota(s) de R$ 2,00\n", cont);
	cont = 0;
	while( N >= 1)
	{
		N -=1;
		cont ++;
	}
	printf("%d nota(s) de R$ 1,00\n", cont);
	cont = 0;
	return 0;
}

