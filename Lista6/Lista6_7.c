#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 4

int main(void) {
  int M[n][n], T[n][n], i, j;

  srand(time(NULL));
  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++){
      M[i][j] = rand()%21;
      printf(" %d", M[i][j]);
    }
  }
  printf("\n\nMatriz Transformada:");
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      M[i][j] = 0;
    }
  }
  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++){
      printf(" %d", M[i][j]);
    }
  }
  return 0;
}