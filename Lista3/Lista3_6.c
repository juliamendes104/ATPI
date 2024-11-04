#include <stdio.h>

int main(void) {
  float N;
  printf("Digite um número real:");
  scanf("%f", &N);

  if (N > 0){
    printf("Número positivo");
  }
  else if(N < 0){
    printf("Número negativo");
  }
  else{
    printf("Número nulo");
  }
}