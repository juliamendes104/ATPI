#include <stdio.h>

int main(void) {
  float he, me, hs, ms, valor;
  printf("Digite a hora e minuto de entrada:");
  scanf("%f %f", &he, &me);
  printf("Digite a hora e minuto de saída:");
  scanf("%f %f", &hs, &ms);

  if(hs - he < 1){
    if(ms - me > 0){
      printf("Valor a ser pago: 4.00");
    }
  }
  else if(hs - he == 1){
    if(ms-me>0){
      printf("Valor a ser pago: 6.00");
    }
    else{
      printf("Valor a ser pago: 4.00");
    }
  }
  else if(hs-he==2){
    if(ms - me > 0){
      printf("Valor a ser pago: 7.00");
    }
    else{
      printf("Valor a ser pago: 6.00");
    }
  }
  else{
    if(ms - me > 0){
      valor = (hs-he)*1 + 4 + 1;
      printf("Valor a ser pago: %.2f", valor);
    }
    else{
      valor = (hs-he)*1 + 4;
      printf("Valor a ser pago: %.2f", valor);
    }
  }
}