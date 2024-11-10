#include <stdio.h>
#define n 5

int main(void) {
  int M[5][5], j, i;

  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++){
      if(i==j){
        M[i][j] = 1;
      }
      else{
        M[i][j] = 0;
      }
      printf(" %d", M[i][j]);
    }
  }
  return 0;
}