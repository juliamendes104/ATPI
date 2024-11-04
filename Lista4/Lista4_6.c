#include <stdio.h>

int main(void) {
  int num, fat=1;

  printf("Digite um número:");
  scanf("%d", &num);

  while (num > 0){
    fat = fat * num;
    num--;
  }
  printf("O fatorial é %d", fat);
}