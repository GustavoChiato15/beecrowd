# include<stdio.h>
# include<string.h>

int main(void)
{
	char vertebrado[13],grupo[9], alimentacao[11];
	scanf("%s", vertebrado);
	scanf("%s", grupo);
	scanf("%s", alimentacao);
	if(!strcmp(vertebrado, "vertebrado"))
	{
		if(!strcmp(grupo, "ave"))
		{
			if(!strcmp(alimentacao, "carnivoro"))
				{
					printf("aguia\n");
				}
			else if(!strcmp(alimentacao, "onivoro"))
				{
					printf("pomba\n");
				}
		}
		else if(!strcmp(grupo, "mamifero"))
		{
			if(!strcmp(alimentacao, "onivoro"))
			{
				printf("homem\n");
			}
			else if(!strcmp(alimentacao, "herbivoro"))
			{
				printf("vaca\n");
			}
		}
	}
	else if(!strcmp(vertebrado, "invertebrado"))
	{
		if(!strcmp(grupo, "inseto"))
		{
			if(!strcmp(alimentacao, "hematofago"))
			{
			printf("pulga\n");
			}
			else if(!strcmp(alimentacao, "herbivoro"))
			{
				printf("lagarta\n");
			}
		}
		else if(!strcmp(grupo, "anelideo"))
		{
			if(!strcmp(alimentacao, "hematofago"))
			{
				printf("sanguessuga\n");
			}
			else if(!strcmp(alimentacao, "onivoro"))
			{
				printf("minhoca\n");
			}
		}
	}
}
