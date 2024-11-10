#include <stdio.h>

int main(void) {
  int A, B, C;
  
  printf("Digite três números positivos:");
  scanf("%d %d %d", &A, &B, &C);

  if (A >= B && B>= C){
    printf("Ordem crescente: %d %d %d", C, B, A);
  }
  else if (C>= B && B>=A){
    printf("Ordem crescente: %d %d %d", A, B, C);
  }
  else if (B>=A && A>=C){
    printf("Ordem crescente: %d %d %d", C, A, B);
  }
  else if (C>=A && A>=B){
    printf("Ordem crescente: %d %d %d", B, A, C);
    }
  else if (A>=C && C>=B){
    printf("Ordem crescente: %d %d %d", B, C, A);
  }
  else{
    printf("Ordem crescente: %d %d %d", A, C, B);
  }
}