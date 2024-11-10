#include <stdio.h>
#define n 6
#define m 3

int main(void) {
  float T[6][3] = {
  {7.5, 8.5, 7.8},
  {8.4, 9.2, 6.8},
  {9.1, 10.0, 9.5},
  {4.0, 5.2, 4.6},
  {5.7, 3.4, 4.3},
  {4.3, 6.0, 5.8}
  }, soma, soma_g=0, media, media_g;
  int i, j;

  for(i=0;i<n;i++){
    soma=0;
    for(j=0;j<m;j++){
     soma += T[i][j];
     soma_g += T[i][j];
    }
    media = soma/m;
    printf("\nMédia: %.2f", media);
  }
  media_g = soma_g/(n*m);
  printf("\nMédia Geral: %.2f", media_g);
  return 0;
}