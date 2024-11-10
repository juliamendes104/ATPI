#include <stdio.h>
#define n 3
#define m 3

int main(void) {
  int A[3][n], B[m][3], j, i, R[m][n], k;
  
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("Digite um valor:");
      scanf("%d", &A[i][j]);
      scanf("%d", &B[i][j]);
    }
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      R[i][j] = 0;
    }
  }
  if(n == m){
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        for(k=0;k<3;k++){
      R[i][j] = R[i][j] + A[i][k] * B[k][j];
        }
      }
    }
    for(i=0;i<n;i++){
      printf("\n");
    for(j=0;j<n;j++){
      printf(" %d", R[i][j]);
       }
      }
    }
  else{
    printf("Não é possível realizar a multiplicação");
  }
  
  return 0;
}