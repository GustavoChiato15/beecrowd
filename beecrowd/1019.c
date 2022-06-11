# include <stdio.h>

int main(void)
{
	int N, hours, minutes;
	scanf("%d", &N);
	while (N >= 3600)
	{
		N -= 3600;
		hours += 1;
	}
	while (N >= 60)
	{
		N -= 60;
		minutes += 1;
	}
	printf("%d:%d:%d\n", hours, minutes, N);
	return 0;
}
