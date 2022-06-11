# include <stdio.h>
# include <math.h>
int main()
{
	int cont = 0;
	int parte_int;
	float valor, parte_decimal;
	scanf("%f", &valor);
	parte_int = valor;
	parte_decimal = round((valor - parte_int)* 100);
	printf("NOTAS:\n");
	while (valor >= 100)
		{
			cont++;
			valor = valor - 100;
		}	
	printf("%d nota(s) de R$ 100.00\n", cont);
	cont = 0;
	while (valor >= 50)
	{
		cont++;
		valor = valor - 50;
	}
	printf("%d nota(s) de R$ 50.00\n", cont);
	cont = 0;
	while (valor >= 20)
	{
		cont++;
		valor = valor - 20;
	}
	printf("%d nota(s) de R$ 20.00\n", cont);
	cont = 0;
	while (valor >= 10)
	{
		cont++;
		valor = valor - 10;
	}
	printf("%d nota(s) de R$ 10.00\n", cont);
	cont = 0;
	while (valor >= 5)
	{
		cont++;
		valor = valor - 5;
	}
	printf("%d nota(s) de R$ 5.00\n", cont);
	cont = 0;
	while (valor >= 2)
	{
		cont++;
		valor = valor - 2;
	}
	printf("%d nota(s) de R$ 2.00\n", cont);
	cont = 0;
	printf("MOEDAS:\n");
	while (valor >= 1)
	{
		cont ++;
		valor = valor - 1;
	}
	printf("%d moeda(s) de R$ 1.00\n", cont);
	cont = 0;
	while (parte_decimal >= 50)
	{
		cont++;
		parte_decimal = parte_decimal - 50;
	}
	printf("%d moeda(s) de R$ 0.50\n", cont);
	cont = 0;
	while (parte_decimal >= 25)
	{
		cont++;
		parte_decimal = parte_decimal - 25;
	}
	printf("%d moeda(s) de R$ 0.25\n", cont);
	cont = 0;
	while (parte_decimal >= 10)
	{
		cont++;
		parte_decimal = parte_decimal - 10;
	}
	printf("%d moeda(s) de R$ 0.10\n", cont);
	cont = 0;
	while (parte_decimal >= 5)
	{
		cont++;
		parte_decimal = parte_decimal - 5;
	}
	printf("%d moeda(s) de R$ 0.05\n", cont);
	cont = 0;
	while (parte_decimal >= 1)
	{
		cont ++;
		parte_decimal = parte_decimal - 1;
	}
	printf("%d moeda(s) de R$ 0.01\n", cont);
}
