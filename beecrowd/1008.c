# include <stdio.h>

int main()
{
	int emp_numb, hours_worked;
	float amount_gained_hour;
	scanf("%d", &emp_numb);
	scanf("%d", &hours_worked);
	scanf("%f", &amount_gained_hour);
	printf("NUMBER = %d\n", emp_numb);
	printf("SALARY = U$ %.2f\n", hours_worked*amount_gained_hour);
}
