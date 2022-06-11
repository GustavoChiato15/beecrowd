# include<stdio.h>
int main(void)
{
	int hora_inicial, hora_final, duracao;
	scanf("%d", &hora_inicial);
	scanf("%d", &hora_final);
	duracao = hora_final <= hora_inicial ? 24-hora_inicial + hora_final : hora_final- hora_inicial;
	printf("O JOGO DUROU %d HORA(S)\n", duracao);
}
