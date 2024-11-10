#include <stdio.h>
#include <math.h>

int main(void) {
  char nome[30];
  float salar, soma=0, media, maior, menor;
  int i;

  menor = INFINITY;
  maior = -INFINITY;

  for (i=0; i<3; i++){
    printf("Digite seu nome:");
    scanf(" %s", nome);
    printf("Digite o salário:");
    scanf("%f", &salar);

    soma = soma + salar;

    if (salar < menor) menor = salar;
    if (salar > maior) maior = salar;
  }

  printf("A média salarial é: %.2f", soma/3);
  printf("\nO maior salário é %.2f e o menor salário é %.2f", maior, menor);
  
}