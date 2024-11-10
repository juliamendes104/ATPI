#include <stdio.h>
#define n 2

typedef struct carro{
char nome[20];
int ano;
float preco;
}Tcar;

int main(void) {
  Tcar dados[n];
  int i;
  float p;

  for(i=0;i<n;i++){
    printf("\nDigite o nome do carro:");
    scanf(" %[^\n]s", dados[i].nome);
    printf("\nDigite o ano:");
    scanf("%d", &dados[i].ano);
    printf("\nDigite o preço:");
    scanf("%f", &dados[i].preco);
  }

  printf("\nDigite um valor para p:");
  scanf("%f", &p);
  while(p!=0){

    for(i=0;i<n;i++){
      if(dados[i].preco <= p){
        printf("\n%s | %d | %.2f", dados[i].nome, dados[i].ano, dados[i].preco);
      }
    }
    printf("\nDigite um valor para p:");
    scanf("%f", &p);
  }
  
  return 0;
}