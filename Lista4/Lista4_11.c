#include <stdio.h>
#define N 200

int main(void) {
int i, fone, diar, total, t_hot=0, t_diar=0;
char nome[30], adress[30], city[10], state[10];

  for (i=0; i<N; i++){
    
    printf("\nRegistro\nNome:");
    scanf(" %[^\n]s", nome);
    printf("\nEndereço:");
    scanf(" %[^\n]s", adress);
    printf("\nCidade:");
    scanf(" %[^\n]s", city);
    printf("\nEstado:");
    scanf(" %[^\n]s", state);
    printf("\nTelefone:");
    scanf("%d", &fone);
    printf("\nNúmero de diárias:");
    scanf("%d", &diar);

    if (diar < 15){
      total = diar * 300 + 20;
    }
    else if (diar == 15){
      total = diar * 300 + 14;
    }
    else{
      total = diar * 300 + 12;
    }
    t_hot = t_hot + total;
    t_diar = t_diar + diar;
    printf("\nNome: %s", nome);
    printf("\nEndereço: %s", adress);
    printf("\nCidade: %s", city);
    printf("\nEstado: %s", state);
    printf("\nTelefone: %d", fone);
    printf("\nTotal a pagar: %d", total);
  }
  printf("\nTotal ganho pelo hotel: %d", t_hot);
  printf("\nTotal de diárias: %d", t_diar);
}
