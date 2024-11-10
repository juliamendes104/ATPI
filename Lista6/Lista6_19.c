#include <stdio.h>
#define n 3
#define m 6

int main(void) {
  float A[n][m], soma2=0, soma=0, media, soma3[n];
  int i, j, cont=0;

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("\nDigite um valor:");
      scanf("%f", &A[i][j]);
      if(j==1 || j==3){
        soma += A[i][j];
        cont++;
      }
      if(j==0 || j==1){
        soma3[i] += A[i][j];
      }
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j+=2){
      soma2 += A[i][j];
    }
  }
  media = soma/cont;
  printf("\n\nSoma das colunas ímpares: %.2f", soma2);
  printf("\n\nMédia das colunas 2 e 4: %.2f", media);
  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<m;j++){
      if(j==5){
        A[i][j] = soma3[i];
      }
      printf(" %.2f", A[i][j]);
    }
  }
  
  return 0;
}