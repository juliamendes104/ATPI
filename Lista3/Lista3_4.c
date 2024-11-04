#include <stdio.h>

int main(void) {
  float a, b, c, media;
  printf("Digite três valores a, b e c:");
  scanf("%f %f %f", &a, &b, &c);

  media = (a + b + c)/3;

  if ((media > a) || (media > b) || (media > c)){
    printf("Média é maior que um dos números.");
  }
  else {
    printf("Média não é maior.");
  }
}