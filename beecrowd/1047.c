# include<stdio.h>
int main(void)
{
	int hora_inicial, minuto_inicial, hora_final, minuto_final, tempo_inicial, tempo_final, duracao, total_horas;
	scanf("%d", &hora_inicial);
	scanf("%d", &minuto_inicial);
	tempo_inicial = (hora_inicial*60) + minuto_inicial;
	scanf("%d", &hora_final);
	scanf("%d", &minuto_final);
	tempo_final = (hora_final*60) + minuto_final;
	duracao = tempo_final <= tempo_inicial ? (24*60)-tempo_inicial + tempo_final : tempo_final - tempo_inicial;
	total_horas = 0;
	while(duracao >= 60)
	{
		duracao -= 60;
		total_horas += 1;
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", total_horas, duracao);
	return 0;
}
