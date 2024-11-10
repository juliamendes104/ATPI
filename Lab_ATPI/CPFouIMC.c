#include <stdio.h>
#include <string.h>
#define n 1

typedef struct{
char nome[100];
char sexo;
float peso;
float altura;
char cpf[12];
} paciente;

int main(void) {
  paciente paci[n];
  int i, iden, aux=0;
  char str1[12];
  float imc;

  printf("\n\nDigite um cpf:");
  fgets(str1, 12, stdin);
  
  for(i=0;i<n;i++){
    printf("\nDigite seu nome:");
    scanf(" %[^\n]s", paci[i].nome);
    printf("\nDigite seu sexo:");
    scanf(" %c", &paci[i].sexo);
    printf("\nDigite seu peso:");
    scanf("%f", &paci[i].peso);
    printf("\nDigite sua altura:");
    scanf("%f", &paci[i].altura);
    printf("\nDigite seu CPF:");
    scanf(" %[^\n]s", paci[i].cpf);
  }

  for(i=0;i<n;i++){
    if(strcmp(str1, paci[i].cpf) == 0){
    iden = i;
    aux = 1;
      }
    else{
      printf("\nNão há cpf correspondente.");
    }
  }

  if(aux == 1){
  imc = paci[iden].peso / (paci[iden].altura * paci[iden].altura);
    printf("\nIMC do paciente: %.2f", imc);
    }
  
  return 0;
}