#include <stdio.h>
#include <math.h>
#define n 5

int main(void) {
  typedef struct coordenadas{
  int x;
  int y;
  }Tcoord;

  Tcoord pontos[n];
  int i, j, k=0;
  float dist[n], menor=INFINITY;

  for(i=0;i<n;i++){
    printf("\nDigite o valor de x:");
    scanf("%d", &pontos[i].x);
    printf("\nDigite o valor de y:");
    scanf("%d", &pontos[i].y);
  }
  for(i=1;i<n;i++){
    dist[i] = sqrt(pow((pontos[0].x - pontos[i].x),2) + pow((pontos[0].y - pontos[i].y),2));
  }
  for(i=1;i<n;i++){
    if(dist[i]<menor){
      menor = dist[i];
    }
  }
  printf("\nMenor distância: %.2f", menor);
  
  
  return 0;
}