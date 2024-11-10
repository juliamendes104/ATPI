#include <stdio.h>

int main(void) {
  int i, j, A[2][2];

  for(i=0; i<2; i++)
    for(j=0; j<2; j++){
      printf("Digite um valor:");
      scanf("%d", &A[i][j]);
      }
  for(i=0; i<2; i++)
    for(j=0; j<2; j++){
      if(i==j) printf("\nDiagonal principal:A[%d][%d]: %d", i, j, A[i][j]);
    }
  }