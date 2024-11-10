#include <stdio.h>
#include <stdlib.h>

typedef struct horamin{
int horas;
int min;
}horamin;

int main(void) {
  int t;
  horamin resul;

  printf("\nDigite um intervalo de tempo em minuto:");
  scanf("%d", &t);

  resul.horas = t/60;
  resul.min = t%60;

  printf("\nHoras: %d Minutos: %d", resul.horas, resul.min);
  
  return 0;
}