#include <stdio.h>
#include <math.h>

int main(void) {
  int maior, menor, quant, soma=0, media, n;

  maior = -INFINITY;
  menor = INFINITY;

  do{
    printf("Digite um número inteiro:\n");
    scanf("%d", &n);
    if(n>=0){
      soma= soma + n;
      quant++;
      if(n>maior)maior = n;
      if(n<menor)menor = n;
    }
    else{
      printf("Processo Encerrado.\n");
    }
  }while(n>=0);
  media = soma/quant;
  printf("\nA soma de todos os números é:%d", soma);
  printf("\nA quantidade de números digitados é %d", quant);
  printf("\nA média dos números é: %d", media);
  printf("\nO menor núméro digitado é: %d", menor);
  printf("\nO maior número digitado é: %d", maior);
}