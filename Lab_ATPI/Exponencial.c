#include <stdio.h>
#include <math.h>

int main(void) {
  float x, aux, fat=1, aux2, soma=0;
  int N, i;

  printf("Digite um número inteiro positivo:");
  scanf("%d", &N);
  printf("Digite um número real:");
  scanf("%f", &x);

  for(i=0; i<N+1; i++){
    aux = pow(x,i);
    if(i==0)fat = 1;
    else fat = fat * i;
    aux2 = aux/fat;
    soma = soma + aux2;
  }
  printf("Exponencial de x é: %.2f\n", soma);
  printf("Exponencial de x: %.2f", exp(x));
  
  
}