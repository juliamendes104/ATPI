#include <stdio.h>
#define n 4

int main(void) {
  int p;

  printf("Digite um número inteiro:");
  scanf("%d", &p);

  if ((p/n) * n == p){
    printf("Divisível por 4");
  }
  else{
    printf("Número inválido");
  }
}