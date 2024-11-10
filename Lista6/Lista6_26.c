#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 3

int main(void) {
  int A[m][m][m][m], i, j, k, l;

srand(time(NULL));
  for(i=0;i<m;i++){
    for(j=0;j<m;j++){
      for(k=0;k<m;k++){
        printf("\n");
        for(l=0;l<m;l++){
          A[i][j][k][l] = rand()%11;
          printf(" %d", A[i][j][k][l]);
        }
      }
    }
  };
  
  return 0;
}