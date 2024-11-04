#include <stdio.h>

int main(void) {
  int n;

  printf("Digite um número inteiro:");
  scanf("%d", &n);

  if(n%2 == 0){
    printf("Número par.");
  }
  else{
    printf("Número ímpar.");
  }
}