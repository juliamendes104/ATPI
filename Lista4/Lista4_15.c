#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, j;
  srand(time(NULL));

  for(i=0; i<21; i++){
    j = 1 + rand() % 6;
    if(i%3 == 0){
      printf("\n");
    }
    printf("%d\t", j);
  }
  return 0;
}
//As saídas são sempre iguais