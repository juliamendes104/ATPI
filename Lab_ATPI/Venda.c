#include <stdio.h>

int main(void) {
  float valor, final;
  int codigo;

  printf("Digite o valor:");
  scanf("%f", &valor);
  printf("Escolha a condição de pagamento: \n1. Venda a Prazo\n2. Venda a Prazo 30 dias\n3. Venda a Prazo 60 dias\n4. Venda a Prazo 90 dias\n5. Venda com Cartão de Débito\n6. Venda com Cartão de Crédito\n");
  scanf("%d", &codigo);

  switch (codigo){
    case 1: printf("Valor final: %.2f", valor * 0.90); break;
    case 2: printf("Valor final: %.2f", valor * 0.95); break;
    case 3: printf("Valor final: %.2f", valor); break;
    case 4: printf("Valor final: %.2f", valor * 1.05); break;
    case 5: printf("Valor final: %.2f", valor * 0.92); break;
    case 6: printf("Valor final: %.2f", valor * 0.93); break;
    }
}