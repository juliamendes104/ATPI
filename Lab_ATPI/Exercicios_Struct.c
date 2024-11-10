#include <stdio.h>
#include <stdlib.h>
#define n 1

typedef struct pessoa{
char nome[30];
float altura;
float peso;
}Tpes;

int main(void) {
  Tpes vetor[n];
  int i;
  float alt, peso;

  for(i=0;i<n;i++){
    printf("\nDigite o nome:");
    scanf(" %[^\n]s", vetor[i].nome);
    printf("\nDigite a altura:");
    scanf("%f", &vetor[i].altura);
    printf("\nDigite o peso:");
    scanf("%f", &vetor[i].peso);
  }
  //a
  printf("\nDigite uma altura:");
  scanf("%f", &alt);
  printf("\nDigite um peso:");
  scanf("%f", &peso);

  //b
  printf("\nAqueles com altura maior:");
  for(i=0;i<n;i++){
    if(vetor[i].altura > alt){
      printf("\nNome: %s", vetor[i].nome);
    }
  }
  //c
  printf("\nAqueles com peso maior:");
  for(i=0;i<n;i++){
    if(vetor[i].peso > peso){
      printf("\nNome: %s", vetor[i].nome);
    }
  }
  return 0;
}