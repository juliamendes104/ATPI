#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 5

int main(void) {
  int M[n][n], i, j, aux[25], sorteio, pos=0, flag, k;

  srand(time(NULL));

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(pos==0){
        sorteio = rand()%100;
        aux[pos] = sorteio;
        M[i][j] = sorteio;
        pos++;
      }
      else{
        do{
          flag=0;
          sorteio = rand()%100;
          for(k=0;k<pos;k++){
            if(aux[k] == sorteio){
              flag = 1;
            }
          }
        }while(flag==1);
        aux[pos] = sorteio;
        pos++;
        M[i][j] = sorteio;
      }
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