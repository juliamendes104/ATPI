#include <stdio.h>

int main(void) {
  int euro, n_500, n_100, n_50, n_20, n_10, n_1, rest1, rest2, rest3, rest4, rest5;

  printf("Digite o valor do euro:");
  scanf("%d", &euro);

  n_500 = euro/500;
  if(n_500>0){
    printf("\nNotas de 500: %d", n_500);
  }
  if(euro%500>0){
    rest1 = euro%500;
    n_100 = rest1/100;
    if(n_100>0){
    printf("\nNotas de 100: %d", n_100);
      }
  }
    if(rest1%100>0){
    rest2 = rest1%100;
    n_50 = rest2/50;
    if(n_50>0){
    printf("\nNotas de 50: %d", n_50);
      }
  }
    if(rest2%50>0){
    rest3 = rest2%50;
    n_20 = rest3/20;
    if(n_20>0){
    printf("\nNotas de 20: %d", n_20);
      }
  }
    if(rest3%20>0){
    rest4 = rest3%20;
    n_10 = rest4/10;
    if(n_10>0){
    printf("\nNotas de 10: %d", n_10);
      }
  }  
    if(rest4%10>0){
    rest5 = rest4%10;
    n_1 = rest5/1;
    if(n_1>0){
    printf("\nNotas de 1: %d", n_1);
      }
  }
  
}
