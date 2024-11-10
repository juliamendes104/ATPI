#include <stdio.h>

int main(void) {
  int i, j, A[3][4], T[4][3];

  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      printf("Digite um valor:");
      scanf("%d", &A[i][j]);
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      T[j][i] = A[i][j];
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      printf("A[%d][%d] = %d\n", i, j, A[i][j]);
    }
  }
  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      printf("T[%d][%d] = %d\n", i, j, T[i][j]);
    }
  }
}
