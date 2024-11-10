#include <stdio.h>

typedef struct{
float real;
float imagin;
}complexo;

int main(void) {
  complexo z, w, soma, prod;

  printf("Digite a parte real e imaginária:\n");
  scanf("%f %f", &z.real, &z.imagin);
  printf("Digite a parte real e imaginária:\n");
  scanf("%f %f", &w.real, &w.imagin);

  soma.real = z.real + w.real;
  soma.imagin = z.imagin + w.imagin;
  printf("Soma: %.2f+%.2fi", soma.real, soma.imagin);

  prod.real = z.real * w.real - z.imagin * w.imagin;
  prod.imagin = z.real*w.imagin + z.imagin*w.real;
  printf("\nProduto: %.2f + %.2fi", prod.real, prod.imagin);
}