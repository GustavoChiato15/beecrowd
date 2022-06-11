# include<stdio.h>
# include<math.h>

int main(void)
{
	double A, B, C, delta, R1, R2;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	delta = (pow(B, 2)) -4*A*C;
	if(delta < 0 || A == 0)
	{
		printf("Impossivel calcular\n");
		return 0;
	}
	else
	{
		R1 = (-B + (pow(delta, 0.5)))/(2*A);
		R2 = (-B - (pow(delta, 0.5)))/(2*A);
	}
	printf("R1 = %.5lf\n", R1);
	printf("R2 = %.5lf\n", R2);
}
