#include <stdio.h>
#define n 100

int main(void) {
  char nome[n][40];
  int matri[n], tipo[n], curso[n], i, j, b;
  float media[n], maior=0;

  for(i=0;i<n;i++){
    printf("\nDigite o nome:");
    scanf(" %[^\n]s", nome[i]);
    printf("\nDigite o numero da matrícula:");
    scanf(" %d", &matri[i]);
    printf("\nDigite o tipo do curso: 1 ou 0");
    scanf(" %d", &tipo[i]);
    printf("\n\nDigite o número do curso");
    scanf("%d", &curso[i]);
    printf("\nDigite a média:");
    scanf("%f", &media[i]);
    if(media[i] > maior){
      maior = media[i];
      j=i;
    }
  }

  for(i=0;i<n;i++){
    printf("\nNome: %s", nome[i]);
    printf("\nMatrícula: %d", matri[i]);
    printf("\nTipo do curso: %d", tipo[i]);
    printf("\nNúmero do curso %d", curso[i]);
    printf("\nMédia: %f", media[i]);
  }
  
  printf("Digite o numero de um curso:");
  scanf("%d", &b);
  for(i=0;i<n;i++){
    if(curso[i] == b){
      printf("Nome: %s", nome[i]);
    }
    if(tipo[i] == 1){
      printf("\nCurso tipo 1: Nome: %s", nome[i]);
      printf("\nMatricula: %d", matri[i]);
    }
    
  }
  printf("\nMelhor média: %s", nome[j]);
  return 0;
}