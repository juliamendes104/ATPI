#include <stdio.h>

int main(void) {
  float SB, SL, VH, NH;

  printf("Digite o valor do salário bruto, o valor das horas extras e o número de horas extras:");
  scanf("%f %f %f", &SB, &VH, &NH);

  SL = (SB + (VH * NH)) * 0.92;

  printf("O salário líquido é: %f", SL);
}
