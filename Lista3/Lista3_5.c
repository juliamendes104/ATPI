#include <stdio.h>

int main(void) {
  float kW, valor;
  int apos;

  printf("Digite a quantidade consumida de kWh:");
  scanf("%f", &kW);
  printf("Você é aposentado? Digite 0 para falso e 1 para verdadeiro");
  scanf("%d", &apos);

  valor = kW * 0.1;
  
  if (apos == 1){
    valor = valor * 0.85;
    printf("Valor: %.2f", valor);
  }
  else{
    printf("Valor:%.2f", valor);
  }
}