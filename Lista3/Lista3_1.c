#include <stdio.h>

int main(void) {
  int num;

  printf("Digite um número:");
  scanf("%d", &num);

  if (num >= 20 && num <=100){
    printf("O número está no intervalo");
  }
  else {
    printf("O número não está no intervalo");
  }
  return 0;
}
