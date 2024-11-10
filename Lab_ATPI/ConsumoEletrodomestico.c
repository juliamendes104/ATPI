#include <stdio.h>
#define n 2

typedef struct consumo{
char nome[15];
float potencial;
float tempo;
}con;

int main(void) {
  con energia[n];
  int i, t;
  float cons_total=0, cons_rel[n];

  for(i=0;i<n;i++){
    printf("\nDigite o nome do eletrodoméstico:");
    scanf(" %[^\n]s", energia[i].nome);
    printf("\nDigite o potencial em KW:");
    scanf("%f", &energia[i].potencial);
    printf("\nDigite o tempo ativo por dia em horas:");
    scanf("%f", &energia[i].tempo);
  }

  printf("\n\nDigite um tempo em dias:");
  scanf("%d", &t);

  for(i=0;i<n;i++){
    cons_rel[i] = (energia[i].potencial * energia[i].tempo) * t;
    cons_total = cons_total + cons_rel[i];
  }

  printf("\nConsumo total: %.2f", cons_total);
  for(i=0;i<n;i++){
    printf("\nConsumo do %s: %.2f por cento", energia[i].nome, (cons_rel[i]/cons_total)*100);
  }

  
  
  return 0;
}