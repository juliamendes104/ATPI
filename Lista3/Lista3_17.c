#include <stdio.h>

int main(void) {
  float p, h, imc;

  printf("Digite seu peso e sua altura:");
  scanf("%f %f", &p, &h);

  imc = p/(h*h);
  if(imc<18.5){
    printf("Desnutrição");
  }
  else if (imc>=18.5 && imc<=24.5){
    printf("Peso normal");
  }
  else if(imc>=25.0 && imc<=29.9){
    printf("Sobrepeso");
  }
  else if(imc>=30.0 && imc<=39.9){
    printf("Obesidade");
  }
  else{
    printf("Obesidade Mórbida");
  }
}