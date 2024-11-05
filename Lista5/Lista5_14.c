#include <stdio.h>
#include <limits.h>

int main(void) {
  int X[5]; 
  int i, maior = INT_MIN;

  for(i=0;i<5;i++){
    printf("Digite o valor:");
    scanf("%d", &X[i]);
    if(X[i] > maior){
      maior = X[i];
    }
  }
    for(i=0;i<5;i++){
      printf("X[%d] = %d\n", i, X[i]);
    }
  for(i=0;i<5;i++){
    printf("\nX[%d] = %.2f", i, ((float) X[i]/maior));
  }
  return 0;
}