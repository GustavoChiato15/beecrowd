# include<stdio.h>
# include<math.h>
int main(void)
{
	int valor_limite, cont;
	do
	{
	scanf("%d", &valor_limite);
	}
	while (valor_limite < 5 || valor_limite > 2000);
	for(cont = 1; cont <= valor_limite; cont++)
	{
		if(cont % 2 == 0)
		{
			printf("%d^2 = %d\n", cont, (int)pow(cont, 2));
		}
	}
}
