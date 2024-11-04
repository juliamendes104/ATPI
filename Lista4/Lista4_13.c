#include <stdio.h>

int main(void) {
  float A= 1.5, F= 1.1;
  int ano=0;

  while (A>F) {
    A = A + 0.02;
    F = F + 0.03;
    ano++;
  }
  
  printf("\n Total de anos: %d", ano);
  
}