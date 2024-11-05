#include <stdio.h>

int main(void) {
  char nome[40];
  int i=0, cont=0;

  printf("\nDigite um nome:");
  scanf("%[^\n]s", nome);

  while(nome[i] != '\0'){
    printf("\n%c", nome[i]);
    i++;
    cont++;
  }

  printf("\nTotal de algarismos: %d", cont);
  
  return 0;
}