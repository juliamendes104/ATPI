#include <stdio.h>

int main(void) {
  char nome[40], sobrenome[40], resultado[80];
  int i=0, cont=0, j=0;

  printf("Digite um nome:");
  scanf("%[^\n]s", nome);
  
  printf("Digite um sobrenome:");
  scanf("%s", sobrenome);

  while(nome[i] != '\0'){
    resultado[j] = nome[i];
    i++;
    j++;
    cont++;
  }
  resultado[j] = ' ';
  j++;
  i=0;
  while(sobrenome[i] != '\0'){
    resultado[j] = sobrenome[i];
    i++;
    j++;
    cont++;
  }
  printf("%s", resultado);
  printf("\nQuantidade de algarismos: %d", cont);
  
  return 0;
}