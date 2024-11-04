#include <stdio.h>

int main(void) {
  char T;
  float dist, cons, custo;

  printf("Digite o tipo de combustível:");
  scanf("%c", &T);
  printf("Digite a distância em km e o consumo de gasolina por kw:");
    scanf("%f %f", &dist, &cons);

  if(T =='G'){
    custo = (dist * cons) * 4.79;
  }
  else if(T =='A'){
    custo = (dist * cons) * 2.68;
  }
  else{
    custo = (dist * cons) * 2.64;
  }

  printf("O custo será de %.2f", custo);
}