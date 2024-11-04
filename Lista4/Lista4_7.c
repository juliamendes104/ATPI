#include <stdio.h>

int main(void) {
  int N, result, i;

  printf("Digite um número:");
  scanf("%d", &N);

  for (i=1; i<11; i++){
    result = N * i;
    printf("\n%d x %d = %d", N, i, result);
  }
}