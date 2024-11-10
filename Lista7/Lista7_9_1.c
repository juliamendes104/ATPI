#include <stdio.h>
#define n 2

int main(void) {
  typedef struct endereco{ int codigo;

char rua[40];
char numero [4];
char cep [4];

}Tend; //Declaração do tipo struct Tend
Tend end[n];
int i;
  for(i=0;i<n;i++){
    printf("Rua:");
    scanf(" %[^\n]s", end[i].rua);
    printf("Número:");
    scanf(" %[^\n]s", end[i].numero);
    printf("Cep:");
    scanf(" %[^\n]s", end[i].cep);
  }
  for(i=0;i<n;i++){
    printf("\nRua: %s", end[i].rua);
    printf("\nNúmero: %s", end[i].numero);
    printf("\nCep: %s", end[i].cep);
  }
  return 0;
}