#include <stdio.h>

int main(void) {
  float P1, P2, P3, media, faltas, aulas, limite;
  char nome[30];

  printf("Digite o nome do aluno:");
  scanf(" %s", nome);
  
  printf("Digite as três notas:");
  scanf("%f %f %f", &P1, &P2, &P3);
  
  printf("Digite o número de faltas e o número de aulas ministradas:");
  scanf("%f %f", &faltas, &aulas);

  limite = aulas * 0.25;
  media = (P1 + P2 + P3)/3;

  if (media >= 5 && faltas < limite){
    printf("Aluno %s: Aprovado", nome);
  }
  else if(media < 5 && faltas < limite){
    printf("Aluno %s: Reprovado por média", nome);
  }
  else if (faltas >= limite){
    printf("Aluno %s: Reprovado por falta", nome);
  }
}