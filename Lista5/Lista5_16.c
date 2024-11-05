#include <stdio.h>

int main(void) {
  int num, i, V[11];

  printf("Digite um número:");
  scanf("%d", &num);

  for(i=1; i<11; i++){
    V[i] = num * i;
  }
  for(i=1; i<11; i++){
    printf("V[%d] x V[%d] = %d \n", num, i, V[i]);
  }
}