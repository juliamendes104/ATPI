#include <stdio.h>
#define n 4

int main(void) {
  int A[n][n], B[n][n], i, j, soma;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("Digite um valor:");
      scanf("%d", &A[i][j]);
      scanf("%d", &B[i][j]);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      soma = A[i][j] + B[i][j];
      printf("\nResultado: %d", soma);
    }
  }
  return 0;
}