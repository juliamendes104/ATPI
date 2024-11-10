#include <stdio.h>

int main(void) {
  typedef struct soma{
  float x;
  float y;
  float z;
  }Tso;

  Tso v1, v2, vr;

  printf("\nDigite as coordenadas x, y e z para o 1º vetor:");
  scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
  printf("\nDigite as coordenadas x, y e z para o 2º vetor:");
  scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

  vr.x = v1.x + v2.x;
  vr.y = v1.y + v2.y;
  vr.z = v1.z + v2.z;

  printf("\nVetor resultante: %.2fx, %.2fy, %.2fz", vr.x, vr.y, vr.z);
  
  return 0;
}