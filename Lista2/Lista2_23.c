#include <stdio.h>

int main(void) {
  char i1, i2;

  printf("Digite dois caracteres:");
  scanf("%c %c", &i1, &i2);

  printf("%d %d", i1, i2);

  if(i1 < i2){
    printf("\n%d vem antes do %d", i1, i2);
  }
  else{
    printf("\n%d vem depois do %d", i1, i2);
  }
}