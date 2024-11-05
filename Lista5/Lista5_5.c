#include <stdio.h>
#define n 10

int main(void) {
  int pilha[n], op, topo=0;

  do{
    printf("\t1.Push");
    printf("\t2.Pop");
    printf("\t3.Print");
    printf("\t4.Sair");
    scanf("%d", &op);

    if(op<1 || op>4){
      printf("Opção inválida");
    }
    else{
      if(op==1){
        if(topo<n){
        printf("Digite um elemento:");
        scanf("%d", &pilha[topo]);
        topo++;
        }
        else{
        printf("Pilha cheia:");
         }
      }
      else if(op==2){
        if(topo>0){
          topo--;
        }
        else{
          printf("Pilha vazia");
        }
      }
      else if(op==3){
        if(topo>0){
          printf("Elemento da pilha %d\n", pilha[topo-1]);
        }
        else{
          printf("Pilha vazia\n");
        }
      }
    }
  }while(op!=4);
  
  return 0;
}