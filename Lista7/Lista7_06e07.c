#include <stdio.h>
#define n 20

int main(void) {
  typedef struct produto{
  char nome[20];
  int codigo;
  float preco;
  int baixas[6];
  }Tprod;
  
  Tprod prod[n];
  int i, j;

  for(i=0;i<n;i++){
    printf("\nDigite o nome:");
    scanf(" %[^\n]s", prod[i].nome);
    printf("\nDigite o código:");
    scanf("%d", &prod[i].codigo);
    printf("\nDigite o preço:");
    scanf("%f", &prod[i].preco);
    for(j=0;j<6;j++){
      printf("\nDigite a baixa do %d º dia da semana:", j+1);
      scanf("%d", &prod[i].baixas[j]);
    }
  }
  for(i=0;i<n;i++){
    printf("\nNome: %s", prod[i].nome);
    printf("\nCódigo: %d\t\t\tPreço: %.2f", prod[i].codigo, prod[i].preco);
    printf("\n 1 2 3 4 5 6");
    printf("\nBaixas:\n");
    for(j=0;j<6;j++){
      printf(" %d", prod[i].baixas[j]);
    }
  }
  return 0;
}