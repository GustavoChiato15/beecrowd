#include <stdio.h>
int main (void){
  float nota1, nota2, nota3, nota4, media, nota_exame;
  scanf("%f", &nota1);
  scanf("%f", &nota2);
  scanf("%f", &nota3);
  scanf("%f", &nota4);
  media = (nota1*2 + nota2*3 + nota3*4 + nota4*1)/(2+3+4+1);
  printf("Media: %.1f\n", media);
  if(media >= 7)
  {
	  printf("Aluno aprovado.\n");
  }
  else if(media >= 5 && media < 7)
  {
	  printf("Aluno em exame.\n");
	  scanf("%f", &nota_exame);
	  printf("Nota do exame: %.1f\n", nota_exame);
	  media = (media+nota_exame)/2;
	  if(media >=5)
	  {
		  printf("Aluno aprovado.\n");
	  }
	  else
	  {
		  printf("Aluno reprovado.\n");
	  }
	  printf("Media final: %.1f\n", media);
	
  }
  else if (media <5)
  {
	  printf("Aluno reprovado.\n");
  }
 return 0; 
}
