#include <stdio.h>

int main(void) {
  int alg, i;

  for (i=0; i < 10; i++){
    printf("\nDigite um código de origem:");
    scanf("%d", &alg);

    switch(alg){
      case 1: printf("Sul"); break;
      case 2: printf("Norte"); break;
      case 3: printf("Leste"); break;
      case 4: printf("Oeste"); break;
      case 5:
      case 6:
      case 12 ... 15: printf("Nordeste"); break;
      case 7 ... 9: printf("Sudeste"); break;
      case 10:
      case 11: printf("Centro-Oeste"); break;
      default: printf("Importado"); break;
    }
  }
}