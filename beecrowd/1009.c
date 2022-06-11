# include <stdio.h>

int main()
{
	char nome[15];
	double salary, total_sold, increase;
	scanf("%s", nome);
	scanf("%lf", &salary);
	scanf("%lf", &total_sold);
	increase = salary + 0.15 * total_sold;
	printf("TOTAL = R$ %.2lf\n", increase);
}
