#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 100
#define m 200

int main(void) {
  int B[n][m], i, j, soma=0;

  srand(time(NULL));
  for(i=0;i<n;i++){
    printf("\n");
   for(j=0;j<m;j++){
      B[i][j] = rand()%100;
     printf(" %d", B[i][j]);
     if(j==40 || i==30){
       soma += B[i][j];
     }
    }
  }
  printf("\nSoma: %d", soma);
}