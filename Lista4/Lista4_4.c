#include <stdio.h>

int main(void) {
  float kW, valor, aux;
  char res;
  
  do{
  printf("Digite a quantidade de kWh consumido:");
  scanf("%f", &kW);

  if(kW <= 50){
    valor = kW * 1.00;
    printf("%.2f", valor);
  }
  else if(kW >= 51 && kW <=100){
    valor = 50 * 1.00;
    aux = (kW - 50) * 1.3;
    printf("%.2f", valor + aux);
  }
  else if (kW >= 101 && kW<= 150){
    valor = (50 * 1.00) + (50 * 1.3);
    aux = (kW - 100) * 1.6;
    printf("%.2f", valor + aux);
  }
  else{
    valor = (50 * 1.00) + (50 * 1.3) + (50 * 1.6);
    aux = (kW - 150) * 2.0;
    printf("%.2f", valor + aux);
  }
    printf("\nDeseja continuar?");
    scanf(" %c", &res);
    } while(res == 's');
}