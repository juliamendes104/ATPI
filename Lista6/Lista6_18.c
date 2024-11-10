#include <stdio.h>
#define n 10

int main(void) {
  char nome[n][40], telef[n][10];
  int idade[n], i, j;

  for(i=0;i<n;i++){
    printf("\nDigite o nome:");
    scanf(" %[^\n]s", nome[i]);
    printf("\nDigite o telefone:");
    scanf(" %[^\n]s", telef[i]);
    printf("\nDigite a idade:");
    scanf("%d", &idade[i]);
  }
  printf("\n\n\t\t\tNome\t\t\tTelefone\t\t\tIdade");
  for(i=0;i<n;i++){
    printf("\n\t\t\t%s\t\t\t%s\t\t\t%d", nome[i], telef[i], idade[i]);
  }
  return 0;
}