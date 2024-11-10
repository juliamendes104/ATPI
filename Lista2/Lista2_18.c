#include <stdio.h>

int main(void) {
  float C, Q, media;

  printf("Digite a quantidade de quilômetros rodados e a quantidade de combustível consumido:");
  scanf("%f %f", &Q, &C);

  media = C/Q;

  printf("A média de combustível é: %.2f", media);
}