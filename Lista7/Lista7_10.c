#include <stdio.h>
#define n 2

int main(void) {
  typedef struct cadastro{
  int codigo;
  char email[20];
  int horas;
  char pag;
  float valor;
  }Tcad;
  int i;
  float aux, soma=0;

  Tcad cad[20];

  for(i=0;i<n;i++){
    printf("Digite o código:");
    scanf(" %d", &cad[i].codigo);
    printf("Digite o email:");
    scanf(" %[^\n]s", cad[i].email);
    printf("Digite o número de horas de acesso:");
    scanf(" %d", &cad[i].horas);
    printf("Tem página? S ou N");
    scanf(" %c", &cad[i].pag);

    if(cad[i].horas > 20){
      aux = cad[i].horas - 20;
      cad[i].valor = 35.00 + (aux*2.5);
    }
    else{
      cad[i].valor = 35.00;
    }
    if(cad[i].pag == 's'){
      cad[i].valor = cad[i].valor + 40;
    }
    soma +=cad[i].valor;
  }
   for(i=0;i<n;i++){
     printf("\nCliente %d : %.2f", cad[i].codigo, cad[i].valor);
   }
  printf("\n\nTotal: %.2f", soma);
  return 0;
}