#include <stdio.h>

int main(void) {
  int n, aux, prox=1, ant=0, i;

  printf("Digite um número:");
  scanf("%d", &n);
  printf("1\n");
  for(i=1;i<n;i++){
    aux = ant + prox;
    ant = prox;
    prox = aux;
    printf("%d\n", aux);
  }
}