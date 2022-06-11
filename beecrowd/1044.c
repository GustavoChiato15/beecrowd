# include<stdio.h>
int main(void)
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if(a % b == 0 || b % a == 0)
	{
		printf("Sao Multiplos\n");
	}
	else
		printf("Nao Sao Multiplos\n");
}
