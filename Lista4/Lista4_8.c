#include <stdio.h>

int main(void) {
  int i, result;

  for(i=1; i<201; i++){
    if((i/4) * 4 == i){
      printf("\n%d é divisível por 4", i);
    }
  }
}