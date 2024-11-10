#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[100], str2[100], str3[200];
  int i, cont=0;
  char aux;

  printf("Digite a string1:");
  gets(str1);
  fflush(stdin);

  printf("Digite a string2:");
  gets(str2);
  fflush(stdin);

  printf("Quantidade de letras da string1: %d\n", strlen(str1));
  printf("Quantidade de letras da string2: %d\n", strlen(str2));

  strcat(str1,str2);
  strcpy(str3,str1);
  puts(str3);

  for(i=0;i<strlen(str3);i++){
    aux = str3[i];
    aux = tolower(aux);
    
    if((aux == 'a') || (aux == 'e') || (aux == 'i') || (aux == 'o') || (aux == 'u')){
      cont = cont + 1;
    }
  }
  printf("\nContagem de vogais: %d", cont);
  
}