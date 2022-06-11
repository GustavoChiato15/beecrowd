# include<stdio.h>
int main(void)
{
	int time_spend, average_speed;
	float distancia, total_gasto;
	scanf("%d", &time_spend);
	scanf("%d", &average_speed);
	distancia = average_speed * time_spend;
	total_gasto = distancia/12;
	printf("%.3f\n", total_gasto);
}

