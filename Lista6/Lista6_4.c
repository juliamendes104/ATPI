#include <stdio.h>
#include <limits.h>
#define n 4

int main(void) {
  int M[n][n], i, j, maior, linha, col;

  maior = INT_MIN;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("Digite um valor:");
      scanf("%d", &M[i][j]);
      if(M[i][j] > maior){
        maior = M[i][j];
        linha = i+1;
        col = j+1;
        }
    }
  }
  for(i=0;i<n;i++){
      printf("\n");
    for(j=0;j<n;j++){
      printf(" %d", M[i][j]);
    }
  }
  printf("\n\nLocalização do maior valor: Linha %d e coluna %d", linha, col);
  return 0;
}