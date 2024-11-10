#include <stdio.h>
#include <math.h>

int main(void) {
  float v[10], media, dp, soma=0;
  int i;

  for(i=0;i<10;i++){
    printf("Digite [%d]:", i);
    scanf("%f", &v[i]);
    soma = soma + v[i];
  }
  media = soma/10;
  soma = 0;

  for(i=0;i<10;i++){
    soma = soma + pow((v[i] - media),2);
  }
  dp = sqrt(soma/9);
  printf("Média: %.2f", media);
  printf("\nDesvio padrão: %.2f", dp);
}