#include <stdio.h>

int main(void) {
  typedef struct ponto{
  float x;
  float y;
  }Tpont;
  typedef struct retangulo{
  Tpont p1;
  Tpont p2;
  }Tretang;
  Tretang ret;
  float b, h, area;

  printf("\nCoordenada x:");
  scanf("%f", &ret.p1.x);
  printf("Coordenada y:");
  scanf("%f", &ret.p1.y);

  printf("\nCoordenada x:");
  scanf("%f", &ret.p2.x);
  printf("Coordenada y:");
  scanf("%f", &ret.p2.y);

  b = ret.p1.x - ret.p2.x;
  h = ret.p1.y - ret.p2.y;
  area = b * h;

  printf("\nArestas: %.2f %.2f", b, h);
  printf("\nÁrea: %.2f", area);
  
  
  return 0;
}