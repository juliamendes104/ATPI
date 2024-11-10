#include <stdio.h>

int main(void) {
  char nome[40];
  int idade;

  printf("\nDigite o seu nome:");
  scanf("%s", nome);

  printf("\nDigite sua idade:");
  scanf("%d", &idade);

  printf("\n%p", nome);//Imprimir o valor de um ponteiro (variáveis que armazenam o endereço de memória de outras variáveis).
  printf("\n%p", idade);
  printf("\n%lu bytes", sizeof(nome));//O operador sizeof indica a quantidade de armazenamento, em bytes, necessária para armazenar um objeto do tipo do operando
  printf("\n%lu bytes", sizeof(idade));
}