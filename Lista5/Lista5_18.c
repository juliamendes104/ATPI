#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int V[11], i, el, ind;

  srand(time(NULL));
  for(i=0;i<10; i++){
    V[i] = rand()%100;
    printf("\n%d", V[i]);
  }
  printf("\nDigite um elemento e um índice:");
  scanf("%d %d", &el, &ind);

  for(i=10;i>=ind;i--){
    V[i] = V[i-1];
  }

  V[ind] = el;
  for(i=0;i<11; i++){
    printf("\n%d", V[i]);
  }
}