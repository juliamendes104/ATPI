#include <stdio.h>

int main(void) {
  int cod;
  printf("Digite o código de origem do produto:");
  scanf("%d", &cod);

  if (cod == 1){
    printf("Sul");
  }
  else if(cod == 2){
    printf("Norte");
  }
  else if(cod == 3){
    printf("Leste");
  }
  else if(cod == 4){
    printf("Oeste");
  }
  else if(cod == 5 || cod == 6){
    printf("Nordeste");
  }
  else if(cod == 7 || cod == 8 || cod == 9){
    printf("Sudeste");
  }
  else if(cod == 10 || cod == 11){
    printf("Centro-Oeste");
  }
  else if(cod == 12 || cod == 13 | cod == 14 || cod == 15){
    printf("Nordeste");
  }
  else{
    printf("Importado");
  }
}