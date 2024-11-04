#include <stdio.h>

int main(void) {
  float kW, valor;
  int apos, qr;

  printf("Digite a quantidade de residências:");
  scanf("%d", &qr);

  while (qr > 0){
  printf("\n\nDigite a quantidade consumida de kWh:");
  scanf("%f", &kW);
  printf("Você é aposentado? Digite 1(sim) ou 0(não).");
  scanf("%d", &apos);

  if (apos == 1){
    valor = (kW * 0.1) * 0.85;
    printf("Valor: %.2f", valor);
  }
  else{
    valor = kW * 0.1;
    printf("Valor:%.2f", valor);
  }
    qr--;
    }
}