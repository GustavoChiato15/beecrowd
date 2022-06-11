# include<stdio.h>

int main(void)
{
	int n1, n2, n3, menor, medio, maior;
	scanf("%d", &n1);
	maior = n1;
	menor = n1;
	scanf("%d", &n2);
	if (maior < n2)
		maior = n2;
	else if (menor > n2)
		 menor = n2;
	scanf("%d", &n3);
	if (maior < n3)
		maior = n3;
	else if (menor > n3)
		 menor = n3;
	printf("%d\n", menor);
	if(menor < n1 && n1 < maior)
		printf("%d\n", n1);
	if(menor < n2 && n2 < maior)
		printf("%d\n", n2);
	if(menor < n3 && n3 < maior)
		printf("%d\n", n3);
	printf("%d\n", maior);
	printf("\n");
	printf("%d\n", n1);
	printf("%d\n", n2);
	printf("%d\n", n3);
}
