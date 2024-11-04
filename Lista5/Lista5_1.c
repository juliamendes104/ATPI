#include <stdio.h>
#include <string.h>

int main(void) {
  int v[10] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 14}, x, y;
  x = 2;
  y = 4;

  printf("%d", v[x+1]);
  printf("\n%d", v[x*3]);
  printf("\n%d", v[x+y]);
  printf("\nErro %d", v[v[1]*v[4]]);
  printf("\n%d", v[x+2]);
  printf("\n%d", v[x*2]);
  printf("\n%d", v[8-v[2]]);
  printf("\n%d", v[x+4]);
  printf("\n%d", v[x+3]);
  printf("\nErro %d", v[x*5]);
  printf("\nErro %d", v[v[4]]);
  printf("\n%d", v[y*1]);
  printf("\n%d", v[v[y+x]]);
  printf("\n%d", v[v[v[7]]]);
}
