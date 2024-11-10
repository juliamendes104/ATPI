#include <stdio.h>
#include <math.h>

float derivada(float v[], int n, float x){
  int i;
  float soma=0;
  for(i=1;i<=n;i++)
    soma = soma + v[i] *i* pow(x,i-1);
  return(soma);
}

int main(void) {
  int i;
  int n=2;
  float x, v[n+1];

  for(i=0;i<=2;i++){
    printf("Digite o coeficiente %d: \n", i);
    scanf("%f", &v[i]);
    
  }
  printf("Digite o valor de x:");
  scanf("%f", &x);
  printf("Derivada de p(%.2f) = %.2f", x, derivada(v,n,x));
   
  return 0;
}