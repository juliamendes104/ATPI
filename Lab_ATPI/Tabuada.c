#include <stdio.h>

int main(void) {
  int i, j,prod;

  for(i=1;i<6;i++){
    for(j=1;j<11;j++){
      printf("%dx%d = %d\n",i, j, i*j);
    }
    printf("\n");
  }
}