#include <stdio.h>

int main(void) {
  float sala_i, reaj;
  int numf;

  printf("Digite o número de funcionários:");
  scanf("%d", &numf);

  while (numf > 0){
  printf("\nDigite seu salário:");
  scanf("%f", &sala_i);

  if (sala_i < 500){
    reaj = sala_i * 1.15;
  }
  else if(sala_i >= 500 && sala_i <= 1000){
    reaj = sala_i * 1.1;
  }
  else{
    reaj = sala_i * 1.05;
  }

  printf("Salário com reajuste: %.2f", reaj);
    
    numf--;
  }
  
}
