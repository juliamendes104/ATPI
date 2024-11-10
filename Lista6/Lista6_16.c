#include <stdio.h>
#define n 2
#define m 3


int main(void) {
  int A[n][m], i, j, T[m][n];

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("Digite um valor:");
      scanf("%d", &A[i][j]);
      T[j][i] = A[i][j];
    }
  }
  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<m;j++){
      printf(" %d", A[i][j]);
    }
  }
  printf("\n");
  for(i=0;i<m;i++){
    printf("\n");
    for(j=0;j<n;j++){
      printf(" %d", T[i][j]);
    }
  }
  return 0;
}