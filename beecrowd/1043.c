# include<stdio.h>

int main(void)
{
	float a, b, c, perimetro, area;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	if(a + b <= c || b + c <= a || c + a <= b)
	{
	area = (a+b)*c/2;
	printf("Area = %.1f\n", area);
	}
	else{
	perimetro = a + b + c;
	printf("Perimetro = %.1f\n", perimetro);
	}
}
