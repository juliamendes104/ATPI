#include <stdio.h>

int main(void) {
  float KW, pagar;
  printf("Digite o número de quillowatts consumidos:");
  scanf("%f", &KW);

  pagar = (KW * 0.12) * 1.18;
  printf("Total a pagar: %f", pagar);
}