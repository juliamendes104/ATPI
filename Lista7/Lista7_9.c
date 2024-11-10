#include <stdio.h>
#define n 2

int main(void) {
  typedef struct endereco{
char rua[n][40];
char numero[n][4];
char cep[n][4];
}Tend;
Tend end;
int i;

  for(i=0;i<n;i++){
    printf("Rua:");
    scanf(" %[^\n]s", end.rua[i]);
    printf("Número:");
    scanf(" %[^\n]s", end.numero[i]);
    printf("Cep:");
    scanf(" %[^\n]s", end.cep[i]);
  }
  for(i=0;i<n;i++){
    printf("\nRua: %s", end.rua[i]);
    printf("\nNúmero: %s", end.numero[i]);
    printf("\nCep: %s", end.cep[i]);
  }
  return 0;
}