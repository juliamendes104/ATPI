#include <stdio.h>

int main(void) {
  int elem, N, R, i, aux;

  printf("Digite o primeiro elemento da PA:");
  scanf("%d", &elem);
  printf("Digite a razão:");
  scanf("%d", &R);
  printf("Digite o número de termos:");
  scanf("%d", &N);

  printf("Elementos: %d\n", elem);
  for(i=1; i<N; i++){
    aux = elem + R;
    elem = aux;
    printf("%d\n", aux);
  }
}