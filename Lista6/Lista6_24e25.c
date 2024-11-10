#include <stdio.h>
#define n 127

int main(void) {
  int A[n][n][n], i, j, k;

  printf("%lu\n", n*n*n*sizeof(A[n][n][n]));

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      for(k=0;k<n;k++){
      printf("Digite um valor:");
      scanf("%d", &A[i][j][k]);
      }
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("\n");
      for(k=0;k<n;k++){
      printf(" %d", A[i][j][k]);
      }
    }
  }
  return 0;
}