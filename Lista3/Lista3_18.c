#include <stdio.h>

int main(void) {
  int C;

  printf("Digite o número do código");
  scanf("%d", &C);

  switch (C){
    case 1: printf("Alimento não perecível"); break;
    case 2 ... 4: printf("Alimento perecível"); break;
    case 5:
    case 6: printf("Vestuário"); break;
    case 7: printf("Higiene pessoal"); break;
    case 8 ... 13: printf("Limpeza e utensílios domésticos"); break;
    default: printf("Inválido"); break;
  }
}