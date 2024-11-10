#include <stdio.h>

int main(void) {
  float V[6], N[6], soma=0;
  int i, j=0;

  for(i=0;i<6;i++){
    printf("Digite um valor:");
    scanf("%f", &V[i]);
  }
  for(i=0;i<6;i++){
    if(V[i] < 0){
      N[i] = V[i];
      j++;
      soma = soma + V[i];
    }
  }
  printf("Média dos valores negativos: %.2f", soma/j);
  
}