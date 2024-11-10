#include <stdio.h>
#define n 5

typedef struct endereco{
char rua[20];
int num;
char bairro[20];
}Tend;
typedef struct cadastro{
char nome[30];
Tend end;
int telef;
}Tcad;

int main(void) {
  Tcad dados[n];
  int i;

  for(i=0;i<n;i++){
    printf("\nDigite seu nome:");
    scanf(" %[^\n]s", dados[i].nome);
    printf("\nDigite seu telefone:");
    scanf("%d", &dados[i].telef);
    printf("\nDigite a rua:");
    scanf(" %[^\n]s", dados[i].end.rua);
    printf("\nDigite o número da casa:");
    scanf("%d", &dados[i].end.num);
    printf("\nDigite o bairro:");
    scanf(" %[^\n]s", dados[i].end.bairro);
  }

  for(i=0;i<n;i++){
    printf("%s | %s %d, %s | %d\n", dados[i].nome, dados[i].end.rua, dados[i].end.num, dados[i].end.bairro, dados[i].telef);
  }
  return 0;
}