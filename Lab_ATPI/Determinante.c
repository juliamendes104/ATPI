#include <stdio.h>

int main(void) {
  int i, j, k, A[3][3], detp=1, mult;

  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("Digite um valor:");
      scanf("%d", &A[i][j]);
      }
    }
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      mult = A[j][i]/A[i][i];
      for(k=0;k<3;k++){
        if(i==j) break;
        A[j][k] = A[j][k] - A[k][j] * mult;
      }
    }
  }
  for(i=0;i<3;i++){
    detp = detp * A[i][i];
  }
  printf("Determinante: %d", detp);
  
}