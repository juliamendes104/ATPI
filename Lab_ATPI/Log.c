#include <stdio.h>
#include <math.h>

int main(void) {
  int N, i;
  float x, num, den, res=0;

  printf("Digite um número inteiro positivo:");
  scanf("%d", &N);

  printf("Digite um número real entre -1 e 1:");
  scanf("%f", &x);

  for(i=0; i<N+1; i++){
    num = pow(-1,i) * pow(x,i+1);
    den = i + 1;
    res =  res + num/den;
  }
  printf("\n%.2f", res);
  printf("\n%.2f", log(1+x));
  
}