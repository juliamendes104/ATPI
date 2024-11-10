#include <stdio.h>
#define n 2

int main(void) {
  int M[n][n], i, j, term, res=0, linha, col;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("Digite um valor:");
      scanf("%d", &M[i][j]);
    }
  }
  printf("Digite um valor X:");
  scanf("%d", &term);

  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++){
      printf(" %d", M[i][j]);
      
      if(M[i][j] == term){
        res = 1;
        linha = i+1;
        col = j+1;
      }
    }
  }
  if(res == 1){
    printf("\n\nLinha: %d Coluna: %d", linha, col);
  }
  else{
    printf("\n\nNão encontrado");
  }
  
  return 0;
}