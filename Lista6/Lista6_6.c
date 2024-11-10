#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 4

int main(void) {
  int A[n][n], B[n][n], C[n][n], i, j;

  srand(time(NULL));
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j] = rand()%100;
      B[i][j] = rand()%100;
    }
  }
  printf("Matriz A:");
  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++){
      printf(" %d", A[i][j]);
    }
  }
  printf("\n\nMatriz B:");
  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++){
      printf(" %d", B[i][j]);
    }
  }
  printf("\n\nMatriz C:");
  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++){
      if(A[i][j]>B[i][j]){
        C[i][j] = A[i][j];
      }
      else{
        C[i][j] = B[i][j];
      }
      printf(" %d", C[i][j]);
    }
  }
  
  
  return 0;
}