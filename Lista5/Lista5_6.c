#include <stdio.h>
#define n 10

int main(void) {
  int fifo[n], op, cont=0, primeiro=0, ultimo=0;

  do{
    printf("\n\t1.Consultar primeiro da fila");
    printf("\t2.Incluir elementos na fila");
    printf("\t3.Atender primeiro da fila");
    printf("\t4.Sair");
    scanf("%d", &op);
    if(op<1 || op>4){
      printf("\nOpção inválida.");
    }
    else{
      if(op==1){
        if(cont==0){
          printf("\nFila vazia");
        }
        else{
          printf("\nPrimeiro elemento: %d", fifo[primeiro]);
        }
      }
      else if(op==2){
        if(cont==n){
          printf("\nFila cheia");
        }
        else{
          printf("\nElemento:");
          scanf("%d", &fifo[ultimo]);
          ultimo++;
          cont++;
        }
      }
      else if(op==3){
        if(cont==0){
          printf("\nFila vazia");
        }
        else{
          primeiro++;
          cont--;
        }
      }
    }
    
  }while(op!=4);
  return 0;
}