# include<stdio.h>
int main(void)
{
float salario, resto, imposto;
imposto = 0;
scanf("%f", &salario);
if(salario <= 2000)
{
	printf("Isento");
}
salario -= 2000;
if(salario > 0 && salario <= 1000)
{
	printf("Imposto: %f", imposto);
	imposto += salario*0.08;
	printf("Imposto: %f", imposto);
}
salario -= 1000;
if(salario > 0 && salario <= 1500)
{
	imposto +=  (salario*0.18);
}
printf("Imposto total %f", imposto);
}
