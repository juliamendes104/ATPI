#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, j, um=0, dois=0, tres=0, quatro=0, cinco=0, seis=0;
  srand(time(NULL));

    for(i=0;i<6000;i++){
    j = 1 + rand() % 6;
    switch(j){
      case 1:um++; break;
      case 2:dois++; break;
      case 3:tres++; break;
      case 4:quatro++; break;
      case 5:cinco++; break;
      case 6:seis++; break;
    }
    }
  printf("%d %d %d %d %d %d", um, dois, tres, quatro, cinco, seis);
  
  return 0;
}