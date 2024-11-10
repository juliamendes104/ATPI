#include <stdio.h>

typedef struct clibanc{
  char nome[30];
  int agencia;
  int conta;
  float saldo;
}banco;

int main(void) {

  banco cliente;
  int op;
  float qt;

  printf("Digite o nome:");
  scanf(" %[^\n]s", cliente.nome);
  printf("Digite a agência:");
  scanf("%d", &cliente.agencia);
  printf("Digite a conta:");
  scanf("%d", &cliente.conta);
  printf("Digite o saldo:");
  scanf("%f", &cliente.saldo);

  do{
  printf("\n\n1.Saque");
  printf("\n2.Depósito");
  scanf("%d", &op);

    if(op == 1){
      printf("\nQuantia do saque:");
      scanf("%f", &qt);
      cliente.saldo = cliente.saldo - qt;
      printf("\nSaldo atual: %.3f", cliente.saldo);
    }
    if(op == 2){
      printf("Quantia do depósito:");
      scanf("%f", &qt);
      cliente.saldo = cliente.saldo + qt;
      printf("\nSaldo atual: %.3f", cliente.saldo);
    }
  }while(op!=0);
  
  
  return 0;
}