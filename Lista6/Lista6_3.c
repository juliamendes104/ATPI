#include <stdio.h>
#define n 4

int main(void) {
  int M[n][n], i, j;

  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++){
      M[i][j] = (i+1) * (j+1);
      printf("  %d", M[i][j]);
    }
  }
  return 0;
}