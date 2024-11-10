#include <stdio.h>

int main(void) {
  int N, soma=0, i;
  printf("Digite um número inteiro positivo:");
  scanf("%d", &N);

  for (i=1; i<=N; i++){
    soma = soma + i;
  }
  printf("A soma é: %d", soma);
}