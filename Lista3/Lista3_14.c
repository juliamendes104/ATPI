#include <stdio.h>

int main(void) {
  int A, B, C;

  printf("Digite três números inteiros diferentes:");
  scanf("%d %d %d", &A, &B, &C);

  if (A>B && A>C){
    printf("O maior número é %d", A);
  }
  else if (B>C && B>A){
    printf("O maior número é %d", B);
  }
  else{
    printf("O maior número é %d", C);
  }
}