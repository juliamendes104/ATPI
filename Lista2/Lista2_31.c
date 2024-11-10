#include <stdio.h>
#define D 18
#define A 70

int main(void) {
  int idade;
  printf("Digite sua idade:");
  scanf("%d", &idade);

  if(idade >= D){
    printf("Pode dirigir");
  }
  else{
    printf("Não pode dirigir");
  }
  if(idade >= A){
    printf("\nPode usufruir da aposentadoria");
  }
  else{
    printf("\nNão pode usufruir da aposentadoria");
  }
}