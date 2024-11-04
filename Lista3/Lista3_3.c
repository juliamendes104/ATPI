#include <stdio.h>

int main(void) {
  char sexo;
  printf("Digite seu sexo:");
  scanf(" %c", &sexo);

  if ((sexo == 'M') || (sexo == 'F')){
    printf("Válido.");
  }
  else {
    printf("Inválido");
  }
  return 0;
}