#include <stdio.h>
#define n 3

int main(void) {
  int A[n][n], i, j, k, perm=1, permu[n], veri[n], res=0;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("\nDigite um valor:");
      scanf("%d", &A[i][j]);
    }
  }

  for(i=0;i<n;i++){
    veri[i] = 0;
    permu[i] = 1;
  }
  for(i=1;i<=n;i++){
    perm = perm * i;
  }

  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(A[i][j]<=n){
      permu[i] = permu[i] * A[i][j];
      }
      else{
        veri[i] = 0;
      }
    }
    if(permu[i] == perm){
      veri[i]=1;
    }
    for(j=0;j<n;j++){
      for(k=j+1;k<n;k++){
        if(A[i][j] == A[i][k]){
          veri[i] = 0;
        }
      }
    }
  }


  for(i=0;i<n;i++){
    res = res + veri[i];
  }
  if(res == n){
    printf("\nQuadrado latino");
  }
  else{
    printf("\nNão é quadrado latino");
  }
  
  return 0;
}
