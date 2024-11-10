#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[100], abrev[100];
  int i;

  printf("Digite seu nome:");
  gets(nome);

  for(i=0;i<strlen(nome); i++){
    if(i==0 ||nome[i-1] == ' '){
      abrev[i] = nome[i];
      printf("%c", abrev[i]);
    }
  }
}