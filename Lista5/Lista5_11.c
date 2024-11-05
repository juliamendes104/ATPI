#include <stdio.h>
#define max 5

int main(void) {
  int i, j, V[max], oper, aux, int1, int2;

    for(i=0;i<max;i++){
      printf("Digite um valor:");
      scanf("%d", &V[i]);
    }
  do{
    printf("\n\nOperações:");
  printf("\n1.Apresentar elementos em ordem crescente");
  printf("\n2.Apresentar elementos em ordem decrescente");
  printf("\n3.Imprimir todo o vetor");
  printf("\n4.Imprimir as posições de um intervalo");
  printf("\n0.Encerrar");
  scanf("%d", &oper);

    if(oper==3){
      for(i=0;i<max;i++){
        printf("\n%d", V[i]);
      }
    }
    else if(oper==4){
      printf("Digite um intervalo real:");
      scanf("%d %d", &int1, &int2);
      for(i=int1;i<=int2;i++){
        printf("\n%d", V[i]);
      }
    }
    else if(oper==1){
      for(i=0;i<max;i++){
        for(j=i+1;j<max;j++){
          if(V[j]<V[i]){
            aux = V[i];
            V[i] = V[j];
            V[j] = aux;
          }
        }
      }
      for(i=0;i<max;i++){
        printf("\n%d", V[i]);
      }
    }
    else if(oper==2){
      for(i=0;i<max;i++){
        for(j=i+1;j<max;j++){
          if(V[j]>V[i]){
            aux = V[i];
            V[i] = V[j];
            V[j] = aux;
          }
        }
      }
      for(i=0;i<max;i++){
        printf("\n%d", V[i]);
      }
    }
      }while(oper!=0);
  }