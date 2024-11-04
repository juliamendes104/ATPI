#include <stdio.h>
//Fibonacci

int main(void) {
  int i, a, b, aux;
  b = 1;
  a = 0;

  printf("Série de Fibonacci: %d\n", b);

  for (i=0; i<14; i++){
    aux = a + b;
    a = b;
    b = aux;

    printf("%d\n", aux);
  }
}