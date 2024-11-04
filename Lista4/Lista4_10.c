#include <stdio.h>

int main(void) {
  int i, soma;
   soma = 0;
  for (i=0; i<501; i+=2){
    soma = soma + i;
  }
  printf("A soma dos valores pares é %d", soma);
}