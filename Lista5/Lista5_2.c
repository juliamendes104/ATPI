#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Biblioteca para função time
#define max 1000
int main(void) {
  int v[max], i, soma=0, soma_par=0, soma_imp=0, n_par=0, n_imp=0;
  float media, media_par, media_imp;
  
  srand(time(NULL));
//Laço para gerar os números aleatórios
  for(i=0; i<max; i++)
  {
    v[i]=rand()%100; //gera valores entre 0 e 100
  }

  for (i=0; i<max; i++){
    soma += v[i];
    if (v[i]%2 == 0){
      soma_par += v[i];
      n_par++;
    }else{
      soma_imp += v[i];
      n_imp++;
    }
  }
  media = soma/max;
  media_par = soma_par/n_par;
  media_imp = soma_imp/n_imp;
  printf("Média dos números: %.2f", media);
  printf("\nMédia dos números pares: %.2f", media_par);
  printf("\nMédia dos números ímpares: %.2f", media_imp);
  printf("\nQuantidade de números pares: %d", n_par);
  printf("\nQuantidade de números ímpares: %d", n_imp);
}