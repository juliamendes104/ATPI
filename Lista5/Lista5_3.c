#include <stdio.h>

int main(void) {
  int A[5], B[5], i, j=4, aux;

  for (i=0; i<5; i++) {
  printf("Digite um valor inteiro positivo:");
  scanf("%d", &A[i]);
  scanf("%d", &B[i]);
    }

  for (i=0; i<5; i++){
    aux = B[i];
    B[i] = A[j];
    A[j] = aux;
    j--;
  }
  for (i=0; i<5; i++){
  printf("\nA[%d] = %d", i, A[i]);
  printf("\nB[%d] = %d", i, B[i]);
    }
}