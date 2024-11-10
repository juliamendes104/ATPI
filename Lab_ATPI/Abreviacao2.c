#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[100], abrev[100];
  int i, j=0;

  printf("Digite seu nome completo:");
  gets(nome);
  fflush(stdin);

  for (i=0;i<strlen(nome);i++){
    if(i==0 || nome[i-1]== ' '){
    abrev[j] = nome[i];
    abrev[j+1] = '.';
    j+=2;
    }
  }
  for(j=0;j<strlen(abrev);j++){
    printf("%c", abrev[j]);
  }
}