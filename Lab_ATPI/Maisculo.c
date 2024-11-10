#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[81], nomemaisculo[81];
  int i, c;

  printf("Digite um nome:");
  gets(nome);

  for(i=0;i<strlen(nome);i++){
    c = nome[i];
    nomemaisculo[i] = toupper(c);
  }
  nomemaisculo[i] = '\0';
  puts(nomemaisculo);
}