#include <stdio.h>

int main(void) {
  int VIN[10], VAI[30], i;

  for(i=0;i<10;i++){
    printf("Digite um valor inteiro:");
    scanf("%d", &VIN[i]);
    VAI[3*i] = VIN[i];
    VAI[3*i+1] = VIN[i];
    VAI[3*i+2] = VIN[i];
  }
  for(i=0;i<30;i++){
    printf("\nVAI[%d] = %d", i, VAI[i]);
  }
  return 0;
}